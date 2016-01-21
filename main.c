#include <stdio.h>
#include <stdlib.h>

#include "intlist.c"

int main ()
{
  Intlist list;

  intlist_dump(&list);

  return 0;
}
