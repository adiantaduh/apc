#include <stdio.h>

int main() {
    char string[50] = "Avaliacao 2";
    char *ptr = string;  // Ponteiro para o início da string.

    while (*ptr != '\0') {  // Itera até o final da string.
        printf("%c\n", *ptr);  // Acessa o caractere usando o ponteiro.
        ptr++;  // Avança o ponteiro para o próximo caractere.
    }

    return 0;
}