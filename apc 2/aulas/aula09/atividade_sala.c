#include <stdio.h>
#include <sting.h> 


// entrada de dados
int soma(int a, int b) {
    // processamento 
    // saida 
    return a + b;
}

// entrada de dados : n
int abs(int n) {
    // processamento
    if(n < 0) n = -n;
    //saida 
    return n;

}

int is_digit(char c) {
    return (c >= '0' && c <= '9') 
    return 1; 
    return 0; 
}

int is_not_alphabet(char c) {

}

void exibir_horas(int milisegundos) {

    int horas = milisegundos / 3600000;
    milisegundos %= 3600000;

    int minutos = milisegundos / 60000;
    milisegundos %= 60000;

    int segundos = milisegundos / 1000;
    milisegundos %= 1000;

    printf("%02d:%02d:%02d:%03d\n", horas, minutos, segundos, milisegundos);
}

int main() {

    int modulo = abs(-5);
    printf("O modulo de -5 é: %d\n", modulo);

    printf("is_digit('5'): %d\n", is_digit('5')); 
    printf("is_digit('*'): %d\n", is_digit('*')); 

    int milisegundos;
    printf("Digite o valor em milisegundos: ");
    scanf("%d", &milisegundos);
    exibir_horas(milisegundos);


    return 0; 
}