EXE = run
CFLAGS = -Wall
LDLIBS = -lGL -lGLEW -lglfw
CC = gcc

.PHONY: all
all: $(EXE)

run: main.c
	$(CC) $(CFLAGS) main.c $(LDLIBS) -o run

.PHONY: clean
clean:
	rm -f $(EXE)