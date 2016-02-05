#include <stdio.h>
#include "board.h"

void board_set(BoardPtr b, TilePtr tile, int index)
{
  b->ptr_tile[index] = tile;
}

Tile* board_get(BoardPtr b, int index)
{
  return b->ptr_tile[index];
}

void board_init(BoardPtr b)
{
  int i;

  for (i=0; i<16; i++) {
    b->ptr_tile[i] = NULL;
  }
  
 intlist_clear(&(b->pos_free));  
}
