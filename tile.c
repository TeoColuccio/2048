#include <stdio.h>

#include "tile.h"

void tile_make(TilePtr t, int n)
{
  t->num = n;
}
int tile_get(TilePtr t)
{
  return t->num;
}
void tile_dump(TilePtr t)
{
  printf("Tile: %d\n", t->num);
}
