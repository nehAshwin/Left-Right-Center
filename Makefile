# Makefile for Left Right Center Game

CC = clang
CFLAGS = -Wall -Wextra -Wstrict-prototypes -Werror -pedantic
CFLAGS += -g

.PHONY: all clean format test
all: lrc test

lrc: lrc.o
	$(CC) $(CFLAGS) $< -o lrc
lrc.o: lrc.c names.h
	$(CC) $(CFLAGS) -c lrc.c 
format: 
	clang-format -i -style=file *.[ch]
clean:
	rm -f lrc *.o
test: tests
	# bash runner.sh
