#ifndef BOARD_H
#define BOARD_H

struct board {
  Tile* ptr_tile[16];
  int pos_free;
};

typedef struct board Board;
typedef struct board* BoardPtr;

void board_set(BoardPtr b, TilePtr, int index);
Tile board_get(BoardPtr b, int index);


