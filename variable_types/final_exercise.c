// Verifying Customer's age to check if film is allowed to be rented.
#define CUSTOMER_NAME_SIZE 100
#include <stdio.h>

struct customer {
  char name[CUSTOMER_NAME_SIZE];
  int age;
};

int main() {
  struct customer customer1;
  int film_class;

  printf("\n Enter Customer Name: ");
  fflush(stdin);
  fgets(customer1.name, CUSTOMER_NAME_SIZE, stdin);

  printf("\n Enter Customer Age: ");
  scanf("%d", &customer1.age);

  printf("\n Enter Film Classification: ");
  scanf("%d", &film_class);

  printf("\n Customer Name: %s", customer1.name);
  printf("\n Customer Age: %d", customer1.age);
  printf("\n Film Classification is: %d", film_class);

  return 0;
}
