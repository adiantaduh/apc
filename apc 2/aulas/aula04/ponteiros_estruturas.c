#include <stdio.h>

struct Pessoa {
    char nome[100]; // 100 bytes     
    int idade; // 4 bytes
    char genero; // M, F // 1 byte
};

int main() {
    struct Pessoa pessoa1 = {"João", 30, 'M'};
  
    printf("Acessando dados de pessoa1:\n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Gênero: %c\n", pessoa1.genero);

    struct Pessoa *p_pessoa;
    p_pessoa = &pessoa1;
    
    printf("Acessando dados de pessoa1:\n");
    
    printf("Nome: %s\n", (*p_pessoa).nome);
    printf("Idade: %d\n", (*p_pessoa).idade);
    printf("Gênero: %c\n", (*p_pessoa).genero);
    
    printf("Acessando dados de pessoa1 com ponteiro utilizando ->:\n");
    
    printf("Nome: %s\n", p_pessoa->nome);
    printf("Idade: %d\n", p_pessoa->idade);
    printf("Gênero: %c\n", p_pessoa->genero);

    
    
return 0;
}