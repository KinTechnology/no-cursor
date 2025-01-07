# Makefile for No-Cursor

CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99
LDFLAGS = -lX11 -lXfixes

all: nocursor

nocursor: main.c
	$(CC) $(CFLAGS) main.c -o nocursor $(LDFLAGS)

clean:
	rm -f nocursor
