#include <stdio.h>

int main(void) {
  int num[3][4] = {
    {1,  2,  3,  4},
    {5,  6,  7,  8},
    {9, 10, 11, 12},
  };

   for(int i = 0; i < 3; i++) {
     for(int j = 0; j < 4; j++) {
         printf("num[0][%d]: %d\n", j, num[0][j]);
      }
   }
  
  
  /* for(int j = 0; j < 4; j++) {
      printf("num[0][%d]: %d\n", j, num[0][j]);
   }
   for(int j = 0; j < 4; j++) {
      printf("num[1][%d]: %d\n", j, num[1][j]);
   }

   for(int j = 0; j < 4; j++) {
      printf("num[2][%d]: %d\n", j, num[2][j]);
   }
*/


 /* for(int lin = 0; lin < 3; lin++) {
    for(int col = 0; col < 4; col++) {
      printf("num[%d][%d]: %d\n", lin, col, num[lin][col]);
      
    }
  }
  */
  return 0;
}