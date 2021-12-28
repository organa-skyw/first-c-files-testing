#include<stdio.h>

// Verifica de os eleitores sao maiores que 18 e podem votar

int main() {

  int eleitor1 = 18;
  int eleitor2 = 60;

  if (eleitor1 && eleitor2 >=18) {
    printf("\n Eleitores");

  } else {
    printf("\n Nao Eleitores");
  }

  return 0;
}
