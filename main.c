#include <stdio.h>
#include <stdlib.h>

#include "intlist.h"
#include "random.h"
#include "tile.h"
#include "board.h"

int main ()
{
  Tile t,c;
  Board game_board;
  
  tile_make(7);
  board_init(&game_board);
  board_add_tile(&game_board, &t);
  board_add_tile(&game_board, &c);
  board_dump(&game_board);

  return 0;
}
