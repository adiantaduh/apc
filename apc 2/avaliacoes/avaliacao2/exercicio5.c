#include <stdio.h>

int main() {
    // Definição da matriz 3x4
    int num[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Ponteiro para inteiro apontando para o início da matriz
    int *p = &num[0][0];

    // Tamanho da matriz: 3 linhas x 4 colunas = 12 elementos
    int total_elements = 3 * 4;

    // Percorre a matriz de forma linear usando o ponteiro
    for (int i = 0; i < total_elements; i++) {
        if (*(p + i) % 2 == 0) {
            *(p + i) = 0;  // Zera o número se for par
        }
    }

    // Exibe a matriz após zerar os números pares
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }

    return 0;
}
