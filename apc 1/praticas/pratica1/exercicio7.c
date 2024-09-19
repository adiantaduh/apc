/*
7- Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
*/
#include <stdio.h>
#include <math.h>

int main(){
  float distancia; 
  float altura;
  float angulo;

  angulo = 45.0f;
  
  printf("Digite a distancia percorrida: ");
  int deu_certo = scanf("%f", &distancia);

  const double PI = 3.1416;
  double seno = sin(angulo * PI / 180);
  altura = distancia * seno;
  printf("A altura alcançada é %f\n", altura);
  

  return 0; 
}