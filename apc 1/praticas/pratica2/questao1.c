/*
1- Faça um programa em C que leia três numeros reais e imprima a média aritmetrica desses numeros.
*/

#include <stdio.h>

int main(){
  
  float numero1;
  float numero2;
  float numero3;

  printf("Entre com o primeiro numero: ");
  int deu_certo = scanf("%f", &numero1);
  
  printf("Entre com o segundo numero: ");
  deu_certo = scanf("%f", &numero2);
  
  printf("Entre com o terceiro numero: ");
  deu_certo = scanf("%f", &numero3);

  float media = (numero1 + numero2 + numero3) / 3;

  printf("A média aritmetrica é: %f\n",media);
  
  return 0; 
}