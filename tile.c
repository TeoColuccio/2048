#include <stdio.h>

#include "tile.h"

Tile tile_make(int value)
{
  t->num = value;
}
int tile_get(TilePtr t)
{
  return t->num;
}
void tile_dump(TilePtr t)
{
  printf("Tile: %d\n", t->num);
}
