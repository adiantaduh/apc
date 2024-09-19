// Faça um programa em C que determine se um número inteiro lido é par ou ímpar.
// //

#include <math.h>
#include <stdio.h>

int main() {
  int numero1;

  printf("Digite um número: ");
  int deu_certo = scanf("%i", &numero1);
  if (deu_certo) {
    int eh_par = numero1 % 2 == 0;

    if (eh_par) {
      printf("O número é par\n");
    } else {
      printf("O número é impar\n");
    }
  } else {
    printf("Número invalido!. Tente novamente.\n");
  }

    return 0;
}