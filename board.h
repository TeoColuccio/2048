#ifndef BOARD_H
#define BOARD_H

#include "tile.h"

struct board {
  Tile* ptr_tile[16];
  int pos_free;
};

typedef struct board Board;
typedef struct board* BoardPtr;

void board_set(BoardPtr b, TilePtr tile, int index);
Tile* board_get(BoardPtr b, int index);
void board_init(BoardPtr b);

#endif
