#include<stdio.h>

// Maria e João estão se preparando para uma viagem.
// Se o orçamento final deles for igual ou maior a R$ 10.000 eles farão uma viagem internacional;
// caso contrário, deverão fazer uma viagem nacional.

int main() {
  float orcamento;

  printf("\n Digite o valor do orçamento: ");
  scanf("%f", &orcamento);

  if (orcamento >= 10000) {
    printf("\n Voces farao uma viagem internacional!");
  } else {
    printf("\n Voces farao uma viagem nacional");
  }
  return 0;
}
