#ifndef TILE_H
#define TILE_H

struct tile {
  int num;
};

typedef struct tile Tile;
typedef struct tile* TilePtr;

void tile_make(TilePtr t, int n);
int tile_get(TilePtr t);
void tile_dump(TilePtr t);

#endif
