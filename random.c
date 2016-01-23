#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "random.h"

void init () {
  srand(time(NULL));
}

int between(int min, int max) { 
  int random = 0;

  random = (rand()%max)+min;
  return random;
}
