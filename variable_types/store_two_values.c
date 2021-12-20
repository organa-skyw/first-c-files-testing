#include <stdio.h>

int main() {
  float value1=0, value2=1;

/* Show in screen instructions to user */
  printf("Enter First Value: \n");
  printf("Enter Second Value: \n");


/* Store type of variable and example here: %f it's used to store float numbers
  and & it's the variable address */
  scanf("%f", &value1);
  scanf("%f", &value2);

  printf("Variable 1 = %.2f \n", value1);
  printf("Variable 2 = %.2f \n", value2);

  return 0;
}
