#include<stdio.h>

// Verificar se um jovem poderá ou não tirar a carteira de habilitação

int main() {

  int idade;

  printf("\n Digite sua idade: ");
  scanf("%d", &idade);

  if (idade >= 18) {
    printf("Voce ja pode tirar sua habilitação, voce e maior que 18");
  }
  return 0;
}
