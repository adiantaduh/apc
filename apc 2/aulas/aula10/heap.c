#include <stdio.h> 
#include <stdlib.h> 

int *criar_vetor(unsigned int n_elementos, int inicializacao) {
    int *vet = malloc(sizeof(int) * n_elementos);
    if (vet != NULL) {
        //logica de inicialização 
        for(int i = 0; i < n_elementos; i++) {
            vet[i] = inicializacao;
        }
    }
    return vet; 
}

void exibir_vetor (int n_elementos, int *vet) {
    for(n_elementos < 0) return;
    for(int i = 0; i < n_elementos; i++) {
        printf("vet[%d]: %d\n", 1 )
    }
}

int main() {
    int *dynamic_num;
    int *dynamic_vet;
    int num;
    printf("&dynamic_num: %p\n", &dynamic_num);
    printf("&dynamic_vet: %p\n", &dynamic_vet);
    printf("&num:%p\n", &num);

    dynamic_num = (int *) malloc(sizeof(int));
    *dynamic_num = 5;
    printf("dynamic_num = %d (end: %p)\n", *dynamic_num, dynamic_num);
    dynamic_vet = (int *) malloc(3*sizeof(int));
    dynamic_vet[0] = 1;
    dynamic_vet[1] = 2;
    dynamic_vet[2] = 3;

    printf("dynamic_vet[0] = ")


    return 0;
}
