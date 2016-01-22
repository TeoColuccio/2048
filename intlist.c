#include <stdio.h>

#include "intlist.h"

void intlist_push(IntlistPtr list, int value)
{
  if (list->size < 16 ) {  
  list->values[list->size] = value;
  list->size++;
  }
}  

void intlist_dump(IntlistPtr list)
{
  while (list->values[list->size] < list->size) {
    printf("%d\n", list->values[list->size]);
    list->size++;
  } 
}

void intlist_clear(IntlistPtr list)
{
  list->size=0;
}

int intlist_get(IntlistPtr list, int index)
{
  return list->values[index];
}

int intlist_len(IntlistPtr list)
{
 return list->size;
}
