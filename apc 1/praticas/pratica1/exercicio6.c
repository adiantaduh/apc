/*
6- Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz quadrada(b²- 4ac)2a).
*/
#include <stdio.h>
#include <math.h>

int main(){
  float a;
  float b; 
  float c;
  float delta;
  float x1;

  printf("Digite o valor de a: ");
  int deu_certo = scanf("%f", &a);

  printf("Digite o valor de b: ");
  deu_certo = scanf("%f", &b);

  printf("Digite o valor de c: ");
  deu_certo = scanf("%f", &c);

  delta = b * b - 4 * a * c;
  x1 = (-b + sqrt(delta)) / (2 * a);

  printf("O resultado é: %f\n", x1);
  deu_certo = scanf("%f", &x1);
  

  return 0;
}