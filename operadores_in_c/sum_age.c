#include <stdio.h>

int main() {
  int age1 = 0;
  int age2 = 0;
  int sum_ages = 0;

  printf("\n Enter first age: ");
  scanf("%d", &age1);

  printf("\n Enter second age: ");
  scanf("%d", &age2);

  sum_ages = (age1 + age2);
  printf("\n The sum of both ages is: %d", sum_ages);

  return 0;
}
