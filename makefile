CC = gcc

CFLAGS = -g -Wall

all: quiz1 new_quiz

quiz1: quiz1.c
	$(CC) $(CFLAGS) -o quiz quiz1.c

new_quiz: new_quiz1.c
	$(CC) $(CFLAGS) -o new_quiz new_quiz1.c

clean:
	rm quiz1 new_quiz
