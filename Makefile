CFLAGS=-Wall -ansi

2048: main.o intlist.o 
	gcc main.o intlist.o -o 2048

main.o:main.c
intlist.o:intlist.c
clean:
	rm -f *.o
