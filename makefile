CC = gcc

CFLAGS = -g -Wall

all: quiz1

quiz1: quiz1.c
	$(CC) $(CFLAGS) -o quiz quiz1.c

clean:
	rm quiz1
