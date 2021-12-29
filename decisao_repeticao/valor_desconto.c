#include<stdio.h>

// Calculando o valor de um desconto de acordo com a cor da roupa comprada

int main() {

  char cor;
  float valor, desc, total;

  printf("\n Digite o valor da compra: ");
  scanf("%f", &valor);
  printf("\n Digite a letra que corresponde ao desconto: ");
  printf("\n a. azul");
	printf("\n v. vermelho");
	printf("\n b. branco");
  printf("\n Agora Digite sua opcao: ");
  scanf("%s", &cor);

  switch(cor) {
    case 'a':
      printf("\n Você escolheu a cor azul, seu desconto será de 30 por cento");
      desc = 30;
      break;

    case 'v':
      printf("\n Você escolheu a cor vermelho, seu desconto será de 20 por cento");
      desc = 20;
      break;

    case 'b':
      printf("\n Você escolheu a cor branco, seu desconto será de 10 por cento");
      desc = 10;
      break;

    default:
    printf("\n Opcão inválida, não será concedido desconto");
		desc = 0;
  }

  total = valor - (valor * desc / 100);
  printf("\n O Valor total da sua compra é de %.2f", total);

  return 0;
}
