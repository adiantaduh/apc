#include <stdio.h>

// Representação de ponteiros
int main(void) {
  int x = 5;
  float pi = 3.14;
  int *ptr_x;
  ptr_x = &x;
  int *ptr_pi;
  printf("&x: %p, x: %d\n", &x, x);
  printf("&ptr_x: %p, ptr_x: %p, *ptr_x: %d\n",
    &ptr_x, ptr_x, *ptr_x);
// Como alterar o valor de 5 para 7?
  *ptr_x = 7; 
  printf("Valor de x: %d (*ptr_x: %d)\n", x, *ptr_x);
  printf("&x: %p, x: %d\n", &x, x);
  printf("&ptr_x: %p, ptr_x: %p, *ptr_x: %d\n",
    &ptr_x, ptr_x, *ptr_x);
// Apontar para nada (segmentation fault)
  ptr_x = NULL;
  *ptr_x = 7;
  printf("Valor de x: %d (*ptr_x: %d)\n", x, *ptr_x);
}