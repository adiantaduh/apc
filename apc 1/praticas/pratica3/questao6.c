/*
6- Faça um programa em C que liste todos os múltiplos de 3, entre 1 e 100.
*/

#include <stdio.h>

int main () {
  int numero;

  printf("Entre com um número inteiro: ");
  int leu_certo = scanf("%i", &numero);

  if (leu_certo) {
    for (int i=1; i<=100; i++) {
      if (i % numero == 0) {
        printf("%i\n", i);
      }
    }
    printf("\n");
  } else {
    printf("Numero invalido!\n");
  }

  return 0;
}