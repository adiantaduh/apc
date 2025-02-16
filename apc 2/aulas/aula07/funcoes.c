#include <stdio.h>

void imprimir5x() {
    printf("Imprimir5x\n");
    for(int i = 0; i < 5; i++) {
        printf("*");
    }
    printf("\n");
}

void imprimirNx(int n) {
    if (n < 0) return; // exceção
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}

void imprimirNxCh(int n, char ch) {
    if (n < 0) return; // exceção
    for (int i = 0; i < n; i++) {
        printf("%c", ch);
    }
    printf("\n");
}

void imprimeMeiaArvore(int f, char sh) {
    for (int i = 1; i <= f; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", sh);
        }
        printf("\n");
    }
}

int abs(int n) {
    return (n < 0) ? -n : n;
}

int main() {
    int f;
    char sh; 
    int num;

    // Imprimir 5 asteriscos em uma linha
    printf("*****\n");

    // Chamada da função imprimir5x
    printf("imprimir 5x: %p\n", imprimir5x);
    void (*p_5x)() = imprimir5x; // Ponteiro para função
    p_5x(); 

    // Usando estrutura de repetição
    for (int i = 0; i < 5; i++) {
        printf("*");
    }
    printf("\n");

    // Usando void
    imprimir5x();

    // Imprimir 3 asteriscos
    printf("***\n");
    for (int i = 0; i < 3; i++) {
        printf("*");
    }
    printf("\n");

    // Imprimir n asteriscos
    int n = 5;
    imprimirNx(n);

    printf("\n\n\n-------------------------------\n\n\n");
    printf("ImprimirNx: %p\n", imprimirNx);
    imprimirNx(3);
    imprimirNx(10);
    imprimirNx(3);
    imprimirNx(0);

    imprimirNxCh(3, '*');
    char ch = '#';
    imprimirNxCh(5, '#');
    imprimirNxCh(10, ch);

    printf("Digite o tamanho da árvore (f): ");
    scanf("%d", &f);
    printf("Digite o caractere para a árvore (sh): ");
    scanf(" %c", &sh); 

    imprimeMeiaArvore(f, sh);

    printf("\n\n-----------------------------------\n\n");

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("O modulo de %d é %d\n", num, abs(num));

    return 0;
}
