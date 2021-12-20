#include <stdio.h>

struct car{
  char model[20];
  int year;
  float value;
};

int main() {
  struct car datacar1;

  printf("\n Type the Car Model: ");
  scanf("%s", datacar1.model);

  printf("\n Type the Car Year: ");
  scanf("%d", &datacar1.year);

  printf("\n Type the Car Value: ");
  scanf("%f", &datacar1.value);

  printf("Data Entered: ");
  printf("\n %s", datacar1.model);
  printf("\n %d", datacar1.year);
  printf("\n %f", datacar1.value);




  return 0;
}
