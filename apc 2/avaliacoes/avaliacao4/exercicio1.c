#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
#include <math.h> 


// a) Valor absoluto
int abs(int x) {
  return (x < 0) ? -x : x;
}

// b) Verificar se é vogal
int eVogal(char ch) {
    ch = toupper(ch); 
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

// c) Verificar se é quadrado
int eQuadrado(int x, int y) {
  return x == y * y;
}

// d) Obter segundos a partir de horas
double obterSegundos(double horas) {
  return horas * 3600;
}

// e) Converter horas para diferentes formatos
double converterHoras(double horas, char formato) {
  formato = toupper(formato); 
  if (formato == 'H') return horas;
  if (formato == 'M') return horas * 60;
  if (formato == 'S') return horas * 3600;
  return -1; 
}


// f) Exibir média de um vetor
void exibirMedia(int n, int *vet) {
  if (n <= 0) {
      printf("Vetor vazio ou tamanho inválido.\n");
      return;
  }
  int soma = 0;
  for (int i = 0; i < n; i++) {
    soma += vet[i];
  }
  printf("média: %.1f\n", (float)soma / n); 
}

// g) Buscar valor em um vetor
int buscarValor(int n, int *vetor, int busca) {
  for (int i = 0; i < n; i++) {
    if (vetor[i] == busca) {
      return i;
    }
  }
  return -1; 
}

// h) Elevar à potência (por referência)
void potencia(int *x, int y) {
  *x = pow(*x, y); 
}


// i) Preencher matriz
int preencherMatriz(int m, int n, int matriz[m][n]) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("Digite o valor para matriz[%d][%d]: ", i, j);
      if (scanf("%d", &matriz[i][j]) != 1) {
        fprintf(stderr, "Erro de leitura!\n");
        return 0;
      }
    }
  }
  return 1; 
}


// j) Trocar valores (por referência)
void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
