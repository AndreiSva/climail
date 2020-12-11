FILES = $(wildcard src/*.c)
COMPILE = gcc -Wall -o main.o src/climain.c

.PHONY: run

run: 
	@${COMPILE} ${CFILES} && ./main.o