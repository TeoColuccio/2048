#include <stdio.h>
#include <stdlib.h>

#include "intlist.h"
#include "random.h"

int main ()
{
  Intlist list;
  int i;

  intlist_clear(&list);
  intlist_push(&list, 2130);
  intlist_push(&list, 202);
  intlist_dump(&list);
  
  random_init(); 
  
  for (i=0;i<10;i++) {
  printf("%d\n", random_between(30,31));
  }

  return 0;
}
