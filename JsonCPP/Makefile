EXE = jsontest
CFLAGS = -Wall
LDLIBS = -ljsoncpp
CC = g++

.PHONY: all
all: $(EXE)

jsontest: main.cpp
	$(CC) $(CFLAGS) main.cpp $(LDLIBS) -o $(EXE)

.PHONY: clean
clean:
	rm -f $(EXE)
