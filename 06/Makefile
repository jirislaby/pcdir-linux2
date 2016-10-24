CC=gcc
CFLAGS=$(OPT) -Wall -ggdb -g3 -fPIC
LD=gcc
LDFLAGS=$(OPT) -ggdb -g3 -fPIC
OPT=-O2

all: debug thread tracer

thread: LDFLAGS+=-pthread

clean:
	rm -f *.o debug thread tracer

.PHONY: all
