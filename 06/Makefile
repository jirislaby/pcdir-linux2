include ../Makefile.common
DEST=debug memcheck prof prof_pg thread tracer

all: $(DEST)

#memcheck: CFLAGS+=-fsanitize=address
#memcheck: LDLIBS+=-lefence

prof_pg: CFLAGS+=-pg
prof_pg: LDFLAGS+=-pg

prof_pg.o: prof.c
	$(CC) -c $(CPPFLAGS) $(CFLAGS) $^ -o$@

thread: LDFLAGS+=-pthread

clean:
	rm -f *.o $(DEST)
