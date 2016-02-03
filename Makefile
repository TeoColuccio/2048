CFLAGS=-Wall -ansi

2048: main.o intlist.o random.o tile.o board.o
	gcc main.o intlist.o random.o tile.o board.o -o 2048

main.o:main.c
intlist.o:intlist.c
random.o:random.c
tile.o:tile.c
board.o:board.c
clean:
	rm -f *.o
