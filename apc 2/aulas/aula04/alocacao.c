#include <stdio.h>

struct Pessoa {
  char nome[100]; // 100 bytes 
  int idade;  // 4 bytes 
  char genero;  // 1 byte
  char byte1, byte2; // 2 bytes 
  char byte3, byte4; // 1 byte
}; // 109 bytes 

int main(void) {
  printf("sizeof(struct Pessoa): %d\n", (int)sizeof(struct Pessoa));
  return 0;
}