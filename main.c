#include <stdio.h>
#include <stdlib.h>

#include "intlist.h"
#include "random.h"
#include "tile.h"
#include "board.h"

int main ()
{
  Board game_board;
  
  board_init(&game_board);
  board_dump(&game_board);

  return 0;
}
