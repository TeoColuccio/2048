#include <stdio.h>
#include <malloc.h>

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
  int i, valori;

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

void board_add_tile(BoardPtr b, TilePtr t)
{
  int rand, len, value_tile;
  
  len = intlist_len(&(b->pos_free)); 
  rand = random_between(0, len);

  Tile *tile;
  tile = malloc(sizeof(Tile));

  value_tile = random_between(0, 11);
  if (value_tile == 0) {
    *tile = tile_make(4);
  }
  else
    *tile = tile_make(2);

  board_set(b, tile, rand);
  intlist_dump(&(b->pos_free));
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

