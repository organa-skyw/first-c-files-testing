#include <stdio.h>

int main() {
  /* Enter 3 ages, store value in a vector, calculate mean
  and display result */

  int age[3] = {0, 0, 0};
  float mean = 0.0;

  printf("\n Enter Age Person 1: ");
  scanf("%d", &age[0]);
  printf("\n Enter Age Person 2: ");
  scanf("%d", &age[1]);
  printf("\n Enter Age Person 3: ");
  scanf("%d", &age[2]);

  mean = (age[0] + age[1] + age[2]) / 3;
  printf("\n Age Mean is: %.2f", mean);
  return 0;
}
