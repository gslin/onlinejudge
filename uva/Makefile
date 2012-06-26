#
CFLAGS=		-ansi -O2 -pipe
LIBS=		-lcrypt -lm

#
BINS=		100

#
.c.o: $*.c
	${CC} ${CFLAGS} -c -o $*.o $*.c

#
all: ${BINS}

clean:
	rm -f ${BINS} *.o

#
100: 100.o
	${CC} -o $@ $> ${LIBS}
