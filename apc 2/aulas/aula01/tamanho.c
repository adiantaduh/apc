#include <stdio.h>

/*S
0

|111 1111 1111 1111 1111
    7    F    F    F    F       
    +1
    
  1|000 0000 0000 0000
        8  0    0    0
*/ 
      
int main(void) {
  short int numero = 0x7FFF; 
  printf("numero = %d (%X)\n", numero, numero);
  numero++;
  printf("numero = %d (%X)\n", numero, numero);
  
  
  
  return 0;
}