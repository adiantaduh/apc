#include <stdio.h>

void funcao(int vet[10], int mat[5][5], float array3D[4][2][5]) {
}

int main(void) {
  
  int vet[10] = {3, 5, 6, 2, 8, 9, 1, 5, 0, 7 }; // representação interna: (int *)
  
  printf("Representação de vetor: \n");
  printf("&vet[0]: %p, vet[0]: %d\n", &vet[0], vet[0]);
  printf("&vet[0]: %p, vet[0]: %d\n", &vet[1], vet[1]);
  printf("&vet[0]: %p, vet[0]: %d\n", &vet[2], vet[2]);
  printf("&vet[0]: %p, vet[0]: %d\n", &vet[3], vet[3]);

  printf("Representação de ponteiro: \n");
  printf("vet: %p, *vet: %d\n", vet, *vet);  // vet[0]
  printf("vet+1: %p, *(vet+1): %d\n", vet+1, *(vet+1));  // vet[1]
  printf("vet+2: %p, *(vet+2): %d\n", vet, *(vet+2));  // vet[2]
  printf("vet+3: %p, *(vet+2): %d\n", vet, *(vet+3));

  int *p = vet; // p = &vet[0];
  
  printf("Representação de vetor: \n");
  printf("&p[0]: %p, p[0]: %d\n", &p[0], p[0]);
  printf("&p[1]: %p, p[1]: %d\n", &p[1], p[1]);
  printf("&p[2]: %p, p[2]: %d\n", &p[2], p[2]);
  printf("&p[2]: %p, p[2]: %d\n", &p[3], p[3]);
  
  printf("Representação de ponteiro:\n");
  printf("p: %p, *p: %d\n", p, *p); // vet[0]
  printf("p+1: %p, *(p+1): %d\n", p+1, *(p+1)); // vet[1]
  printf("p+2: %p, *(p+2): %d\n", p, *(p+2)); // vet[2]

  int *p2 = &vet[5];
  
  printf("Representação de vetor: \n");
  
  printf("&p2[-1]: %p, p2[0]: %d\n", &p2[-1], p2[-1]); // vet[4]
  printf("&p2[0]: %p, p2[0]: %d\n", &p2[0], p2[0]); // vet[5]
  printf("&p2[1]: %p, p2[1]: %d\n", &p2[1], p2[1]);
  printf("&p2[2]: %p, p2[2]: %d\n", &p2[2], p2[2]);
  
  printf("Representação de ponteiro:\n");
  
  printf("p2-1: %p, *(p2-1): %d\n", p2-1, *(p2-1));
  printf("p2: %p, *p: %d\n", p2, *p2);
  printf("p2+1: %p, *(p2+1): %d\n", p2+1, *(p2+1));
  printf("p2+2: %p, *(p2+2): %d\n", p2+2, *(p2+2));


  int n = 5;
  int *pn = &n;
  printf("Representação de ponteiro:\n");
  printf("p: %p, (&n), *p: %d\n", pn, *pn);
  printf("Representação de vetor:\n");
  printf("&pn[0]: %p (&n), p[0]: %d (n)\n", &pn[0], pn[1]);
  
  
  return 0;
}
