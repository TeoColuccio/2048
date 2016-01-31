#ifndef INTLIST_H
#define INTLIST_H

struct intlist {
  int values[16];
  int size;
};

typedef struct intlist Intlist;
typedef struct intlist* IntlistPtr;

void intlist_push(IntlistPtr list, int value);
void intlist_dump(IntlistPtr list);
void intlist_clear(IntlistPtr list);
int intlist_get(IntlistPtr list, int index);
int intlist_len(IntlistPtr list);

#endif
