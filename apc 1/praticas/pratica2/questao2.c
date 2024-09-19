/*
2- Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.
*/

#include <stdio.h>
#include <math.h>

int main(){

  int numero1;
  int numero2;
  
  float divisao = 1.0f * numero1 / numero2; 
  printf("A divisão dos numeros é %f\n", divisao);

  int resto = numero1 % numero2;
  printf("O resto da divisão dos numeros é %i\n", resto);
  return 0; 
}