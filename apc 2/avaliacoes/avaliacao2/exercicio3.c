#include <stdio.h>

int main() {
    char string[19] = "Exercicio de APC II";
    char *ptr = string;  // Ponteiro para o início da string.
    char *ultima_ocorrencia = NULL;  // Para armazenar o ponteiro da última ocorrência.
    char c;

    printf("Digite o caractere que deseja buscar: ");
    scanf("%c", &c);

    // Percorre a string usando o ponteiro
    while (*ptr != '\0') {
        if (*ptr == c) {
            ultima_ocorrencia = ptr;  // Armazena o ponteiro da última ocorrência
        }
        ptr++;  // Avança o ponteiro para o próximo caractere
    }

    // Verifica se o caractere foi encontrado
    if (ultima_ocorrencia != NULL) {
        // Calcula o endereço baseado no exemplo dado (considerando 0x100 como o endereço inicial)
        printf("Saída: 0x%x\n", 0x100 + (int)(ultima_ocorrencia - string));
    } else {
        printf("Caractere não encontrado\n");
    }

    return 0;
}