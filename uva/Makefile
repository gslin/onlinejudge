#
CFLAGS=		-ansi -O2 -pipe -Wall
LIBS=		-lcrypt -lm

#
BINS=		100 102 113

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

102: 102.o
	${CC} -o $@ $> ${LIBS}

113: 113.o
	${CC} -o $@ $> ${LIBS}
