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
  
  random_init();
  printf("%d\n", random_between(0,16));
  
  return 0;
}
