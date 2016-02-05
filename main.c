#include <stdio.h>
#include <stdlib.h>

#include "intlist.h"
#include "random.h"
#include "tile.h"
#include "board.h"

int main ()
{
  Intlist list;
  Tile t;
  int i;
  Board game_board;

  intlist_clear(&list);
  intlist_push(&list, 2130);
  intlist_push(&list, 202);
  intlist_dump(&list);
  
  random_init(); 
  
  for (i=0;i<10;i++) {
  printf("%d\n", random_between(30,31));
  }
  
  tile_make(8);
  printf("%d\n", tile_get(&t));
  tile_dump(&t);

  board_init(&game_board);

  return 0;
}
