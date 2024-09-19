#include <stdio.h>

int main() {
  char opcao;

  printf("MENU PRINCIPAL\n");
  printf("1 - Consultar Saldo\n");
  printf("2 - Fazer Recarga\n");
  printf("3 - Listar Recados\n");
  printf("4 - Ligações Feitas\n");
  printf("0 - Sair\n");
  printf("Entre com uma opção => ");
  int leu_certo = scanf("%c", &opcao);

  switch(opcao) {
    case '1': printf("Seu saldo é R$ 10.00\n"); break;
    case '2': {
      float valor;
      printf("Entre com o valor da recarga: ");
      leu_certo = scanf("%f", &valor);
      if (!leu_certo) {
        printf("Valor invalido. Tente novamente\n");
      }
      break;
    }
    case '3': printf("Você não tem recados\n"); break;
    case '4': 
      printf("61 99999-9999\n");
      printf("61 99999-8888\n");
      printf("61 99999-7777\n");
      printf("61 99999-6666\n");
      break;
    case 0: printf("Até logo!\n"); break;
    default: printf("Opção inválida. Tente Novamente\n");
  }
  
  
  return 0;
}