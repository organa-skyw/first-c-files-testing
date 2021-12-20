#include <stdio.h>

int main() {
  /* store 2 coordenates and print
  their values as number and memory address */
   int x = 5;
   int y = 10;

/* Print the actual value stored in the variable x and y */
  printf("\n Value stored in x: %d", x);
  printf("\n Value stored in y: %d", y);

/* Print the memory address of the variables x and y */
  printf("\n x Address: %x", &x);
  printf("\n y Address: %x", &y);


  return 0;
}
