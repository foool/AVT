CC = gcc
CFLAGS = -g -mavx -mavx2 -fPIC
#CFLAGS = -g -Wall -msse4.1 -DINTEL_SSE4 -msse4.2 -DINTEL_SSE4 -fPIC
#CFLAGS = -g -Wall -Wextra -DINTEL_SSE -msse2 -DINTEL_SSE2 -msse3 -DINTEL_SSE3 -mssse3 -msse4.1 -DINTEL_SSE4 -msse4.2 -DINTEL_SSE4 -mavx -mavx2 -fPIC

PROGS = avt.test raw-avx.test

all: clean $(PROGS)


avt.test: avt.o 
	$(CC) $(CFLAGS) -o $@ $<

raw-avx.test: raw-avx.o 
	$(CC) $(CFLAGS) -o $@ $<

avt.o: avt.cc
	$(CC) $(CFLAGS) -c $*.cc

raw-avx.o: raw-avx.cc
	$(CC) $(CFLAGS) -c $*.cc

clean:
	rm -f *.o *.test
