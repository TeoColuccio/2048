CFLAGS=-Wall -ansi

2048: intlist.o 
	gcc intlist.o -o intlist

intlist.o:intlist.c
clean:
	rm -f *.o
