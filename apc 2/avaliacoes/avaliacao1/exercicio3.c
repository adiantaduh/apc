#include <stdio.h>

int main(void) {
  int n1 = 3, n2 = 5;
  int *ptr_n1, *ptr_n2;
   ptr_n1 = &n1;
   ptr_n2 = &n2;
  *ptr_n1 = 5;
  *ptr_n2 = 3; 
  printf("n1: %d, n2: %d\n", n1, n2);
}