# Generate ASM from samples

CC=g++
CFLAGS=-S

all: add struct class

add:
	$(CC) $(CFLAGS) add.cpp

struct:
	$(CC) $(CFLAGS) struct.cpp

class:
	$(CC) $(CFLAGS) class.cpp

clean:
	rm *.s
