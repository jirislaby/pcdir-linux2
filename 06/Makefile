CC=gcc
CFLAGS=$(OPT) -Wall -ggdb -g3 -fPIC
LD=gcc
LDFLAGS=$(OPT) -ggdb -g3 -fPIC
OPT=-O2

all: debug thread

debug: debug.o

thread: thread.o
	$(CC) $(LDFLAGS) -o $@ $< -lpthread

clean:
	rm -f *.o debug thread

.PHONY: all
