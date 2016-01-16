#ifndef INTLIST_H
#define INTLIST_H

struct Intlist {
  int  values[16];
  int size;
};

typedef struct Intlist Intlist;
typedef struct Intlist* IntlistPtr;

int intlist_push(IntlistPtr);
void intlist_dump(IntlistPtr);
void intlist_clear(IntlistPtr);

#endif
