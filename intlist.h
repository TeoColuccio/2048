#ifndef INTLIST_H
#define INTLIST_H

struct Intlist {
  int values[16];
  int size;
};

typedef struct Intlist Intlist;
typedef struct Intlist* IntlistPtr;

void intlist_push(IntlistPtr list, int value);
void intlist_dump(IntlistPtr list);
void intlist_clear(IntlistPtr list);
int intlist_get(IntlistPtr list, int index);

#endif
