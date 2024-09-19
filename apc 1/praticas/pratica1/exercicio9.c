/*
9- Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.
*/

#include <stdio.h>
#include <math.h>

int main(){

  int anos;
  int meses;
  int dias;
  int total_dias;

  printf("Digite sua idade em anos: %i\n", anos);
  int deu_certo = scanf("%i", &anos);
  
  printf("Digite quantos meses você tem: %i\n", meses);
  deu_certo = scanf("%i", &meses);
  
  printf("Digite quantos dias você tem: %i\n", dias);
  deu_certo = scanf("%i", &dias);

  total_dias = anos * 365 + meses * 30 + dias;

  printf("A idade em dias é: %i\n", total_dias);

  
  return 0;
  
}