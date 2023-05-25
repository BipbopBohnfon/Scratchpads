#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define BUFSIZE 25565

void fileiofun();
void gotofun();
void fseekfun();

int main(int argc, char** argv) {
	int fd;
	char* buf;

	if (argc == 1) {
		printf("FREEMAN YOU FOOL! USE -h OR --help TO SEE HOW TO USE THIS SCHIZOPHRENIC PIECE OF GARBAGE!\n");
		exit(0);
	} else if (!strcmp(argv[2], "-a")) {
		printf("You asked for it.\n\n\n");
	}

	printf("Running NEW and IMPROVED -- %s -- Version 1.0\n", argv[0]);
	for (int i = 1; i < argc; i++) {
		printf("Argument %d: %s\n", i, argv[i]);
	}

	// ------------------------------------ Reading from Files ------------------------------------ //
	fileiofun();
	// ------------------------------------ GOTO ------------------------------------ //
	gotofun();
	// ------------------------------------ Fseek ------------------------------------ //
	fseekfun();
	// ------------------------------------  ------------------------------------ //
	// ------------------------------------  ------------------------------------ //

	printf("Reached End! Yippee! Meine Mama erlaubt dass ich fortnite spielen und kola trinken darf! Yippee! Ich spiele fortnite, und trink Kola!\n\n");
}

void fileiofun() {
	// O_RDONLY, O_WRONLY, or O_RDWR Bitwise Or'd with all other open flags //
	int fd = open("/home/bipbop/Programming/Scratchpads/Files/madagascar", O_RDWR | O_CREAT, S_IRWXU);
	char* buf;

	if (fd != -1) {
		buf = malloc(sizeof(char) * BUFSIZE);
		ssize_t len = read (fd, buf, BUFSIZE);
		if (len > 0) {
			printf(buf);
		}

		write(fd, "hellothere", sizeof("hellothere"));
		free(buf);
	} else {
		perror("We out\n");
		exit(-1);
	}
	close(fd);
}

void gotofun() {
	int num = 5;
	HERE:
	printf("%d\n", num);
	num--;
	if (num > 0) goto HERE;
}

void fseekfun() {
	/*
		Origin: SEEK_CUR - Current File position of fd + pos
				SEEK_END - length of file + pos, pos of zero sets it to EOF
				SEEK_SET - Current file position is set to pos
	*/

	int fd = open("/home/bipbop/Programming/Scratchpads/Files/file", O_RDONLY);
	size_t buffersize;
	if (fd != (off_t) -1) {
		buffersize = lseek(fd, 0, SEEK_END);
		char* buf = malloc(sizeof(char) * (int) lseek(fd, 0, buffersize));
		lseek(fd, 0, SEEK_SET);
		read(fd, buf, buffersize); 

		printf(buf);
		free(buf);
	}

}
