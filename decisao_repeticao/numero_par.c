#include <stdio.h>

// Verificando se o numeor digitado eh par ou impar

int main() {

	int num;

  printf ("\n Digite um número inteiro: ");
	scanf ("%d", &num);
	if (num % 2 == 0) {
        printf ("\n O número é par");
    } else {
        printf ("\n O numero é ímpar");
    }
	return 0;
}
