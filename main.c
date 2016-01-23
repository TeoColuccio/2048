#include <stdio.h>
#include <stdlib.h>

#include "intlist.h"
#include "random.h"

int main ()
{
  Intlist list;

  intlist_clear(&list);
  intlist_push(&list, 2130);
  intlist_push(&list, 202);
  intlist_dump(&list);
  
  printf("%d\n", between(1,16));
  
  return 0;
}
