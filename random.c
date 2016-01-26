#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "random.h"

void random_init () {
  srand(time(NULL));
}

int random_between(int min, int max) { 
  int random = 0;

  random =rand()%(max-min)+(min);
  return random;
}
