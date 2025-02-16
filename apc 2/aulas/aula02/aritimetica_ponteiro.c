#include <stdio.h>

int main(void) {

  /*Uma variável do tipo char ocupa 1 byte. Uma variável do tipo int ocupa 4 bytes e um double ocupa 8 bytes. Uma variável do tipo float ocupa 4 bytes.
  */
  
  printf("sizeof(int): %d\n", (int)sizeof(int));
  printf("sizeof(char): %d\n", (int)sizeof(char));
  printf("sizeof(float): %d\n", (int)sizeof(float));
  printf("sizeof(double): %d\n", (int)sizeof(double));
  
  int inteiro = 100; // &inteiro = 0x100
  printf("i: %d, i+1: %d, i+20: %d\n", inteiro, inteiro+1, inteiro+20);
  printf("i: %d, i+1: %d, i+20: %d\n", inteiro, inteiro-1, inteiro-20);

  int *pint = &inteiro;
  printf("pint: %ul, pint+1: %ul, pint+20: %ul\n", pint, pint+1, pint+20);
  printf("pint: %ul, pint+1: %ul, pint+20: %ul\n", pint, pint-1, pint-20);

  char *pchar = (char *)&inteiro;
  printf("pchar: %ul, pchar+1: %ul, pchar+20: %ul\n", pchar, pchar+1, pchar+20);
  printf("pchar: %ul, pchar+1: %ul, pchar+20: %ul\n", pchar, pchar-1, pchar-20);

  double *pdouble = (double *)&inteiro;
  printf("pdouble: %ul, pdouble+1: %ul, pdouble+20: %ul\n", pdouble, pdouble+1, pdouble+20);
  printf("pdouble: %ul, pdouble+1: %ul, pdouble+20: %ul\n", pdouble, pdouble-1, pdouble-20);

  
  
  return 0; 
}