#include <stdio.h>

#include "tile.h"

Tile tile_make(int value)
{
 Tile t;

 t.num = value;

 return t;
}
int tile_get(TilePtr t)
{
  return t->num;
}
void tile_dump(TilePtr t)
{
 if(t != NULL) {
   printf("Tile: %d\n", t->num);
 }
 else 
   printf("NULL");
}
