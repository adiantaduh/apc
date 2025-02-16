#include <stdio.h>

struct Pessoa {
    char nome[100]; // 100 bytes     
    int idade; // 4 bytes
    char genero; // M, F // 1 byte
};

int main() {
    struct Pessoa pessoa1 = {"João", 30, 'M'};
    //struct Pessoa pessoa1 = {.nome = "João", .idade = 30, .genero = 'M'};
    
    /*
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Gênero: %c\n", pessoa1.genero);
    */

    struct Pessoa pessoa2;
    // pessoa2 = {.nome = "Maria", .idade = 19, .genero = 'F'};

    printf("Digite o nome: ");
    int deu_certo = scanf("%99[^\n]%*c", pessoa2.nome);
    printf("Digite a idade: ");
    deu_certo = scanf("%d%*c", &pessoa2.idade);
    // getchar();
    printf("Digite o gênero: ");
    deu_certo = scanf(" %c", &pessoa2.genero);

    printf("Nome: %s\n", pessoa2.nome);
    printf("Idade: %d\n", pessoa2.idade);
    printf("Gênero: %c\n", pessoa2.genero);

    return 0;
}
