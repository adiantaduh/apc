#include <stdio.h>

int main() {
  printf("\x1b[32m--------------------------------\n");
  printf("        NOTA   LEGAL            \n");
  printf("--------------------------------\x1b[0m\n");
  printf("ITEM          QTD          VALOR\n");
  printf("%-13s %03i \x1b[34m%14.2f\x1b[0m\n","\x1b[33mBanana nanica\x1b[0m", 2, 20.00);
  printf("%-13s %03i \x1b[34m%14.2f\x1b[0m\n","Uva globo", 1, 15.00);
  printf("%-13s %03i \x1b[34m%14.2f\x1b[0m\n","Laranja", 1, 18.00);

  // printf("Banana nanica  2           20.00\n");
  // printf("Uva globo      1           15.00\n");
  // printf("Laranja        1           18.00\n");
  
  printf("--------------------------------\n");
  printf("TOTAL:............: %12.2f\n",        53.00);


  return 0;
}