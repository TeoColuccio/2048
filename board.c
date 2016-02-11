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
  int valori;

  for (i=0; i<16; i++) {
    b->ptr_tile[i] = NULL;
  }
  
  intlist_clear(&(b->pos_free));
  
  for (valori=0; valori<16; valori++) {
    intlist_push(&(b->pos_free), valori);
  }
}

void board_dump(BoardPtr b)
{
  printf("Le celle sono: %d\n", intlist_len(&(b->pos_free)));
  intlist_dump(&(b->pos_free));
  int i, celle_libere = 0;

  for (i=0; i<16; i++) {
    if (b->ptr_tile[i] == NULL) {
    celle_libere++;
    }
  }
  printf("Il numero delle celle libere e': %d\n", celle_libere);

}
