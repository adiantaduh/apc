/*
3- Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos.
*/
#include <stdio.h>

int main() {
  int avaliacao = 0;
  printf("Entre com a avaliação de 1 a 5: ");
  int leu_certo = scanf("%i", &avaliacao);

    switch (avaliacao) {
      case 1: printf("Ruim\n"); break;
      case 2: printf("Insuficiente\n"); break;
      case 3: printf("Suficiente\n"); break;
      case 4: printf("Bom\n"); break;
      case 5: printf("Ótimo\n"); break;
      default: printf("Nota invalida. Tente novamente");
  return 0;
}