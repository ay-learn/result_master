#!/bin/make

# CFLAGS=-Wno-format -Wno-deprecated-declarations -Wno-format-security -lm `pkg-config --cflags --libs gtk+-3.0` -export-dynamic
# LDFLAGS=`pkg-config --libs gtk+-3.0`
CFLAGS=-g

all: ecart_type


util.o: util.c util.h
	gcc  -c util.c $(CFLAGS)

main.o: main.c
	gcc -c main.c $(CFLAGS)

ecart_type: main.o util.o
	gcc main.o util.o -o ecart_type $(CFLAGS)

clean:
	rm -rf *.o ecart_type
