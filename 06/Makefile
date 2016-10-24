CC=gcc
CFLAGS=$(OPT) -Wall -ggdb -g3 -fPIC
LD=gcc
LDFLAGS=$(OPT) -ggdb -g3 -fPIC
OPT=-O2
DEST=debug prof prof_pg thread tracer

all: $(DEST)

prof_pg: CFLAGS+=-pg
prof_pg: LDFLAGS+=-pg

prof_pg.o: prof.c
	$(CC) -c $(CPPFLAGS) $(CFLAGS) $^ -o$@

thread: LDFLAGS+=-pthread

clean:
	rm -f *.o $(DEST)

.PHONY: all
