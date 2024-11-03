
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// a) Alocar um array de inteiros dinamicamente
int *build_int_array(unsigned int size) {
    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "Erro de alocação de memória!\n");
        exit(1); 
    }
    return arr;
}

// b) Calcular as médias das notas e retornar um array dinâmico
float *medias_das_notas(int m, int n, float matriz[m][n]) {
    float *medias = (float *)malloc(m * sizeof(float));
    if (medias == NULL) {
        fprintf(stderr, "Erro de alocação de memória!\n");
        exit(1);
    }

    for (int i = 0; i < m; i++) {
        float soma = 0;
        for (int j = 0; j < n; j++) {
            soma += matriz[i][j];
        }
        medias[i] = soma / n;
    }
    return medias;
}

// c) Repetir uma string e retornar um array de caracteres dinâmico
char *repete_string(char str[], int n) {
    size_t len_str = strlen(str);
    size_t tamanho_novo = len_str * n + 1; 

    char *nova_string = (char *)malloc(tamanho_novo * sizeof(char));
    if (nova_string == NULL) {
        fprintf(stderr, "Erro de alocação de memória!\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        strcpy(nova_string + i * len_str, str); 
    }
    nova_string[tamanho_novo -1] = '\0';
    return nova_string;
}


int main() {
        
    // a)
    int *int_array = build_int_array(5);
    for (int i = 0; i < 5; i++) {
        int_array[i] = i * 10;
        printf("int_array[%d] = %d\n", i, int_array[i]);
    }
    free(int_array);  

    // b)
    float matriz[3][2] = {{5, 7}, {8, 7}, {6, 10}};
    float *medias = medias_das_notas(3, 2, matriz);
    for (int i = 0; i < 3; i++) {
        printf("Média do aluno %d: %.1f\n", i, medias[i]);
    }
    free(medias);

    // c)
    char str[] = "Ana";
    char *repetida = repete_string(str, 3);
    printf("String repetida: %s\n", repetida);
    free(repetida);

    return 0;
} 
