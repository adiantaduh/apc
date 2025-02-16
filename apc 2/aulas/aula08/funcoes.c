#include <stdio.h>

void imprimir5x() {
    printf("Imprimir5x\n");
    for(int i = 0; i < 5; i++) {
        printf("*");
    }
    printf("\n");
}

void imprimir7x() {
    void imprimir7x() {
    printf("Imprimir7x\n");
    for(int i = 0; i < 7; i++) {
        printf("*");
    }
    printf("\n");
}
    printf("\n");
}

void imprimirNx(int n, char ch) {
    if(n <= 0) return;
    for(int i = 0; i < 7; i++) 
        printf("%c", ch);
    printf("\n");
}

// Qual e a utilidade de utilizar parametros em funcoes 

int main(int argc char *argv[], char *envp) {

    for(int i = 0, i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i];)
    }
    printf("Variaveis de ambiente em C: \n")
    while(envp != NULL) {
        printf("%s", *envp);
        envp++;
    }

    printf("ImprimirNx: %p", impimirNx);
    imprimirNx(5, 'X');
    void (*p5x)() = imprimirNx;
    void (*pNx)(int n, char ch) = imprimirNx;
    pNx(10, '$');
}


    return 0;
