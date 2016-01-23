CFLAGS=-Wall -ansi

2048: main.o intlist.o random.o
	gcc main.o intlist.o random.o -o 2048

main.o:main.c
intlist.o:intlist.c
random.o:random.c
clean:
	rm -f *.o
