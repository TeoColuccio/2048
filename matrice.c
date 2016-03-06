#include <stdio.h>

int main() 
{
  int r, c, i;
  for (i = 0; i < 16; i++) {
    for (r = 0; r < 4 ; r++) {
      printf("\n");
      for (c = 0; c < 4; c++) {
        printf("%d \t", i = r*4*c);
        i++;
      }
    }
  }
  return 0;
}
