#include <stdio.h>

int main() {
  int avaliacao = 0;

  printf("Entre com a avaliação de 1 a 5: ");
  int leu_certo = scanf("%i", &avaliacao);

  // if (avaliacao == 1) {
  //   printf("O motorista ganhou uma *\n");
  // } else if (avaliacao == 2) {
  //   printf("O motorista ganhou uma **\n");
  // } else if (avaliacao == 3) {
  //   printf("O motorista ganhou ***\n");
  // } else if (avaliacao == 4) {
  //   printf("O motorista ganhou ****\n");
  // } else if (avaliacao == 5) {
  //   printf("O motorista ganhou *****\n");
  // } else {
  //   printf("Avaliação invalida. Tente novamente");
  // }
  switch (avaliacao) {
    case 1: printf("O motorista ganhou *\n"); break;
    case 2: printf("O motorista ganhou **\n"); break;
    case 3: printf("O motorista ganhou ***\n"); break;
    case 4: printf("O motorista ganhou ****\n"); break;
    case 5: printf("O motorista ganhou *****\n"); break;
    default: printf("Avaliação invalida. Tente novamente");
  }
  return 0;
}