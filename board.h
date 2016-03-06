#ifndef BOARD_H
#define BOARD_H

#include "tile.h"
#include "intlist.h"
#include "random.h"

struct board {
  Tile* ptr_tile[16];
  Intlist pos_free;
};

typedef struct board Board;
typedef struct board* BoardPtr;

void board_set(BoardPtr b, TilePtr tile, int index);
Tile* board_get(BoardPtr b, int index);
void board_init(BoardPtr b);
void board_update_freepos(BoardPtr b);
void board_dump(BoardPtr b);
void board_add_tile(BoardPtr b);
void board_destroy(BoardPtr b);
void board_move_tile(BoardPtr b, int index_origin, int index_destinazione);
void board_rotate(BoardPtr b);

#endif
