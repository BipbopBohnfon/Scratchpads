#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
	for (int i = 0; i < (int) atoi(argv[1]); i++) {
		pid_t pid = fork();
		if (pid == 0) break;
	}

	printf("Hello world!\n");

	return 0;
}
