#include<stdio.h>

// Exemplo usando switch-case para operacao em caixa eletronico

int main() {

  int n;

  // Mostra na tela a opcao para o usuario
  printf("\n(1) para Saldo\n(2) para Extrato\n(3) para Saque\n(4) para Sair");
  printf("\n Informe a opção desejada: ");
  scanf("%d", &n);

  switch (n) {
    case 1:
      printf("Saldo");
      break;
    case 2:
      printf("Extrato");
      break;
    case 3:
      printf("Saque");
      break;
    case 4:
      printf("Sair");
      break;
    default:
      printf("Invalido");
  }
  return 0;
}
