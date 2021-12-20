#include <stdio.h>

int main() {
  float grades[3][2];

  printf("Type a grade:");
  scanf("%f", &grades[0][0]);
  printf("Grade Entered: %.2f", grades[0][0]);
  return 0;
}
