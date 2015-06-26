CC = g++
#CFLAGS = -g -Wall -msse4.1 -DINTEL_SSE4 -msse4.2 -DINTEL_SSE4 -fPIC
#CFLAGS = -g -Wall -Wextra -mmmx -msse -DINTEL_SSE -msse2 -DINTEL_SSE2 -msse3 -DINTEL_SSE3 -mssse3 -msse4.1 -DINTEL_SSE4 -msse4.2 -DINTEL_SSE4 -mavx -mavx2 -fPIC

CFILES = $(wildcard *.cc)
PROGS = $(patsubst %.cc,%.test,$(CFILES))

all: $(PROGS)


%.test: %.o 
	        $(CC) $(CFLAGS) -o $@ $<

.c.o:
	        $(CC) $(CFLAGS) -c $*.c

clean:
	        rm -f *.o *.test
