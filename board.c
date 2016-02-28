#include <stdio.h>
#include <stdlib.h>

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
  
  board_update_freepos(b);
}

void board_update_freepos(BoardPtr b)
{
  int i;
  
  intlist_clear(&(b->pos_free)); 
  for (i=0; i<16; i++) {
    if (b->ptr_tile[i] == NULL) {
    intlist_push(&(b->pos_free), i);
    }
  }
}

void board_dump(BoardPtr b)
{
  int i, celle_libere = 0;

  printf("Il numero totale delle celle e': %d\n", intlist_len(&(b->pos_free)));
  
  printf("Il contenuto delle celle e': \n");
  for (i=0; i < 16; i++) {
    if (b->ptr_tile[i] == NULL) {
    celle_libere++;
    }
  printf("%d: ", i);
  tile_dump(b->ptr_tile[i]);
  }
  printf("Il numero delle celle libere e': %d\n", celle_libere);
  printf("Celle libere: \n");
  intlist_dump(&(b->pos_free));
}

void board_add_tile(BoardPtr b)
{
  int index, len, value_tile;
  
  len = intlist_len(&(b->pos_free)); 
  index = random_between(0, len);

  Tile *tile;
  tile = malloc(sizeof(Tile));

  value_tile = random_between(0, 11);
  if (value_tile == 0) {
    *tile = tile_make(4);
  }
  else
    *tile = tile_make(2);

  board_set(b, tile, index);
  board_update_freepos(b);
}

void board_destroy(BoardPtr b)
{
  int i;

  for (i=0; i<16; i++) {
    if (b->ptr_tile[i] != NULL) {
      free(b->ptr_tile[i]);
    }
  }
}

void board_move_tile(BoardPtr b, int index_origin, int index_destinazione)
{
  if (board_get(b, index_origin) != NULL && board_get(b, index_destinazione) == NULL) {
    board_set(b, b->ptr_tile[index_origin], index_destinazione);
    b->ptr_tile[index_origin] = NULL;
    board_update_freepos(b);
  } 
}

