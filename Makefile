# file:    Makefile
# author:  Scott Cheloha (scottcheloha@gmail.com)
# created: Nov 19 2014

# Makefile for digitsum

PROG = ds
SRC = ds.c

all: ds.c
	cc -o $(PROG) $(SRC)

.PHONY: clean

clean:
	rm -rf $(PROG)
