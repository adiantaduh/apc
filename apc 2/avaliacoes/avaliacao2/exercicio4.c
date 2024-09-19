#include <stdio.h>

int main() {
    char string[] = "Exercicio de APC II";  // String de exemplo.
    char *ptr_inicio = string;  // Ponteiro para o primeiro caractere (0x100).
    char *ptr_final = string;  // Ponteiro auxiliar para percorrer a string.

    // Percorre a string até encontrar o caractere nulo '\0'.
    while (*ptr_final != '\0') {
        ptr_final++;  // Avança o ponteiro para o próximo caractere.
    }

    // Calcula o número de caracteres pela diferença entre os ponteiros.
    int num_caracteres = (int)(ptr_final - ptr_inicio);

    printf("Número de caracteres na string: %d\n", num_caracteres);

    return 0;
}
