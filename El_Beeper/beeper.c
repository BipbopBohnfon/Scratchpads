/*
 * 	Shamelessly ripping off Johnathan Nightingale's beep.c
 *
 *	This code is written by Christopher Gemperle, I think.
 *
 * This code may distributed only under the terms of the GNU Public License
 * which can be found at http://www.gnu.org/copyleft or in the file COPYING
 * supplied with this code.
 *
 * Remember:
 * chmod 4755 a.out
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <signal.h>
#include <fcntl.h>
#include <getopt.h>
#include <unistd.h>
#include <linux/kd.h>
#include <sys/ioctl.h>

#define PCSPKR_CLOCK_RATE 1193180

#define C_FREQ	4186.01/128
#define Cs_FREQ	4434.92/128
#define D_FREQ	4698.63/128
#define Ds_FREQ	4978.03/128
#define E_FREQ	5274.04/128
#define F_FREQ	5587.65/128
#define Fs_FREQ	5919.91/128
#define G_FREQ	6271.93/128
#define Gs_FREQ	6644.88/128
#define A_FREQ	7040.00/128
#define As_FREQ	7458.62/128
#define B_FREQ	7902.13/128

typedef struct settings_t {
    int bpm;
    int debugFreq;
    FILE* noteFile;
} settings_t;

typedef struct note_t {
    int freq1;
    int freq2;
} note_t;

int console_fd = -1;
int parse_freq(float base_freq, char* current_char);
void parse_notes(char* note_string);
void panic();
void parse_command_line_args(int argc,  char** argv, settings_t *settings);
void play_tones(int freq1, int freq2, int notelength);
void sigint_callback(int signum);

const char* HELP_STRING =
"Usage: [options] file\n"
"Options:\n-h / --help\t\tHelp\n";

const int pows[8] = {128, 64, 32, 16, 8, 4, 2, 1};
char* DEBUG_STRING_JESU =
"G4\nG4\nA4\nB4\nD5\nC5\nC5\nE5\nD5\n"
"D5\nG5\nFs5\nG5\nD5\nB4\nG4\nA4\nB4\n"
"C5\nD5\nE5\nD5\nC5\nB4\nA4\nB4\nG4\n"
"Fs4\nG4\nA4\nD4\nFs4\nA4\nC5\nB4\nA4\n"
"B4\nG4\nA4\nB4\nD5\nC5\nC5\nE5\nD5\n"
"D5\nG5\nFs5\nG5\nD5\nB4\nG4\nA4\nB4\n"
"E4\nD5\nC5\nB4\nA4\nG4\nD4\nG4\nFs4\n";

int main(int argc, char** argv) {
	signal(SIGINT, sigint_callback);

	// I think stdin and /dev/console use the same file descriptor, and
	// for some reason, console can't open until stdin is closed
	close(0);

	if ((console_fd = open("/dev/console", O_WRONLY | O_SYNC) == -1)) {
		perror("Failed to open console for writing.");
		exit(1);
	}

	settings_t settings;

	parse_command_line_args(argc, argv, &settings);

    parse_notes(DEBUG_STRING_JESU_BASS);
    play_tones(392, 392, 285714 * 4);

	close(console_fd);
}

int parse_freq(float base_freq, char* current_char) {
    if (*current_char < '1' || *current_char > '8') panic();
    return (int) (base_freq * pows[56 - *current_char]);
}

void panic() {
    perror("Something is probably wrong with the format of your note file, there, bucko.\nShutting Down\n");
    ioctl(0, KIOCSOUND, 0);
    close(console_fd);
    exit(1);
}

void play_tones(int freq1, int freq2, int notelength) {
    ioctl(0, KIOCSOUND, (int) (PCSPKR_CLOCK_RATE / freq1));
    usleep(notelength);
    ioctl(0, KIOCSOUND, (int) (0));
}

// Whoever you are... if you're looking at this... I'm so sorry.
void parse_notes(char* note_string) {
    char* current_char = note_string;
    int length = strlen(note_string);

    note_t notes;
    int* curnote = &notes.freq1;
    u_int8_t note_count = 0;
    char next;
    bool note_set = false;

    while (current_char < note_string + length) {
        switch (*current_char) {
            case 'C':
                note_count += 1;
                current_char += 1;
                next = *current_char;
                if (next == 's') {
                    current_char += 1;
                    *curnote = parse_freq(Cs_FREQ , current_char);
                } else if (next == 'b') {
                    current_char += 1;
                    *curnote = parse_freq(B_FREQ/2 , current_char);
                } else
                    *curnote = parse_freq(C_FREQ , current_char);
                note_set = true;
                curnote = &notes.freq2;
                current_char += 1;
                break;
            case 'D':
                note_count += 1;
                current_char += 1;
                next = *current_char;
                if (next == 's') {
                    current_char += 1;
                    *curnote = parse_freq(Ds_FREQ , current_char);
                } else if (next == 'b') {
                    current_char += 1;
                    *curnote = parse_freq(Cs_FREQ , current_char);
                } else
                    *curnote = parse_freq(D_FREQ , current_char);
                note_set = true;
                curnote = &notes.freq2;
                current_char += 1;
                break;
            case 'E':
                note_count += 1;
                current_char += 1;
                next = *current_char;
                if (next == 's') {
                    current_char += 1;
                    *curnote = parse_freq(F_FREQ , current_char);
                } else if (next == 'b') {
                    current_char += 1;
                    *curnote = parse_freq(Ds_FREQ , current_char);
                } else
                    *curnote = parse_freq(E_FREQ , current_char);
                note_set = true;
                curnote = &notes.freq2;
                current_char += 1;
                break;
            case 'F':
                note_count += 1;
                current_char += 1;
                next = *current_char;
                if (next == 's') {
                    current_char += 1;
                    *curnote = parse_freq(Fs_FREQ , current_char);
                } else if (next == 'b') {
                    current_char += 1;
                    *curnote = parse_freq(E_FREQ , current_char);
                } else
                    *curnote = parse_freq(F_FREQ , current_char);
                note_set = true;
                curnote = &notes.freq2;
                current_char += 1;
                break;
            case 'G':
                note_count += 1;
                current_char += 1;
                next = *current_char;
                if (next == 's') {
                    current_char += 1;
                    *curnote = parse_freq(Gs_FREQ , current_char);
                } else if (next == 'b') {
                    current_char += 1;
                    *curnote = parse_freq(Fs_FREQ , current_char);
                } else
                    *curnote = parse_freq(G_FREQ , current_char);
                note_set = true;
                curnote = &notes.freq2;
                current_char += 1;
                break;
            case 'A':
                note_count += 1;
                current_char += 1;
                next = *current_char;
                if (next == 's') {
                    current_char += 1;
                    *curnote = parse_freq(As_FREQ , current_char);
                } else if (next == 'b') {
                    current_char += 1;
                    *curnote = parse_freq(Gs_FREQ , current_char);
                } else
                    *curnote = parse_freq(A_FREQ , current_char);
                note_set = true;
                curnote = &notes.freq2;
                current_char += 1;
                break;
            case 'B':
                note_count += 1;
                current_char += 1;
                next = *current_char;
                if (next == 's') {
                    current_char += 1;
                    *curnote = parse_freq(C_FREQ*2 , current_char);
                } else if (next == 'b') {
                    current_char += 1;
                    *curnote = parse_freq(As_FREQ , current_char);
                } else
                    *curnote = parse_freq(B_FREQ , current_char);
                note_set = true;
                curnote = &notes.freq2;
                current_char += 1;
                break;
            case '\n':
                // Get rid of magic number for jesu
                if (note_set == false) play_tones(0, 0, 285714);
                else if (note_count == 1) {
                    play_tones(notes.freq1, notes.freq1, 285714);
                }
                else if (note_count == 2) {
                    play_tones(notes.freq1, notes.freq2, 285714);
                }
                note_set = false;
                curnote = &notes.freq1;
                note_count = 0;
                current_char += 1;
                break;
        }
    }
}

void parse_command_line_args(int argc,  char** argv, settings_t *settings) {
	int c;

	struct option opt_list[4] = {{"help", 0, NULL, 'h'},
								{"version", 0, NULL, 'V'},
								{"new", 0, NULL, 'n'},
								{0,0,0,0}};

	while((c = getopt_long(argc, argv, "d:D:chvV", opt_list, NULL)) != EOF) {
		switch(c) {
            case 'v':
                printf("Burgers?\n");
                break;
			case 'h':
				printf("%s\n", HELP_STRING);
				break;
		}
	}
}

// Shut it all down if we get SIGINT
void sigint_callback(int signum) {
	ioctl(console_fd, KIOCSOUND, 0);
	close(console_fd);
	exit(signum);
}