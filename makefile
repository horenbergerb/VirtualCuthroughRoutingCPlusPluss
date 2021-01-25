CC = g++
CFLAGS = -Wall -g

test: test.o messages.o
	$(CC) $(CFLAGS) -o test test.o messages.o

test.o: test.cpp messages.h
	$(CC) $(CFLAGS) -c test.cpp

messages.o: messages.h
