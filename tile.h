#ifndef TILE_H
#define TILE_H

struct tile {
  int num;
};

typedef struct tile Tile;
typedef struct tile* TilePtr;

Tile tile_make (int value);
int tile_get(TilePtr t);
void tile_dump(TilePtr t);

#endif
