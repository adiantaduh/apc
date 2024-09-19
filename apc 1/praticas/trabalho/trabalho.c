#include <stdio.h>
#include <string.h>

#define MAX_JOGADORES 10

int main() {
  char resposta[100];
  char nomes[MAX_JOGADORES][50]; // Array para armazenar os nomes dos jogadores
  int pontuacoes[MAX_JOGADORES]; // Array para armazenar as pontuações dos
                                 // jogadores
  int opcao, deu_certo;

  // Inicializando o ranking
  for (int i = 0; i < MAX_JOGADORES; i++) {
    strcpy(nomes[i], "-");
    pontuacoes[i] = 0;
  }

  do {
    printf("\n-- Menu --\n");
    printf("1. Jogar Quiz\n");
    printf("2. Ver Ranking\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    deu_certo = scanf("%d", &opcao);

    switch (opcao) {
    case 1: {
      printf("Bem-vindo ao quiz sobre o Flamengo!\n\n");

      // Perguntar o nome do jogador
      char nome_jogador[50];
      printf("Digite seu nome: ");
      deu_certo = scanf("%s", nome_jogador);

      int pontuacao = 0;

      // Pergunta 1
      printf("1. Em que ano o Flamengo foi fundado? ");
      deu_certo = scanf("%s", resposta);
      if (strcmp(resposta, "1895") == 0) {
        printf("Correto!\n");
        pontuacao++;
      } else {
        printf("Errado! A resposta correta é: 1895\n");
      }

      // Pergunta 2
      printf("2. Qual é o estádio do Flamengo? ");
      deu_certo = scanf("%s", resposta);
      if (strcmp(resposta, "Maracana") == 0) {
        printf("Correto!\n");
        pontuacao++;
      } else {
        printf("Errado! A resposta correta é: Maracana\n");
      }

      // Pergunta 3
      printf("3. Quantas vezes o Flamengo ganhou o Campeonato Brasileiro até "
             "2023? ");
      deu_certo = scanf("%s", resposta);
      if (strcmp(resposta, "8") == 0) {
        printf("Correto!\n");
        pontuacao++;
      } else {
        printf("Errado! A resposta correta é: 8\n");
      }

      // Pergunta 4
      printf("4. Quem é o maior artilheiro da história do Flamengo? ");
      deu_certo = scanf("%s", resposta);
      if (strcmp(resposta, "Zico") == 0) {
        printf("Correto!\n");
        pontuacao++;
      } else {
        printf("Errado! A resposta correta é: Zico\n");
      }

      // Pergunta 5
      printf("5. Qual foi o primeiro título internacional do Flamengo? ");
      deu_certo = scanf("%s", resposta);
      if (strcmp(resposta, "Libertadores") == 0) {
        printf("Correto!\n");
        pontuacao++;
      } else {
        printf("Errado! A resposta correta é: Libertadores\n");
      }

      // Pergunta 6
      printf("6. Qual o número da camisa do Arrascaeta? ");
      deu_certo = scanf("%s", resposta);
      if (strcmp(resposta, "14") == 0) {
        printf("Correto!\n");
        pontuacao++;
      } else {
        printf("Errado! A resposta correta é: 14\n");
      }

      // Pergunta 7
      printf("7. Qual foi o último título conquistado pelo Flamengo em 2020? ");
      deu_certo = scanf("%s", resposta);
      if (strcmp(resposta, "Brasileirão") == 0) {
        printf("Correto!\n");
        pontuacao++;
      } else {
        printf("Errado! A resposta correta é: Brasileirão\n");
      }

      // Pergunta 8
      printf("8. Qual foi o placar na final do Mundial de Clubes de 2019, onde "
             "o Flamengo perdeu? ");
      deu_certo = scanf("%s", resposta);
      if (strcmp(resposta, "1x0") == 0) {
        printf("Correto!\n");
        pontuacao++;
      } else {
        printf("Errado! A resposta correta é: 1x0\n");
      }

      // Pergunta 9
      printf("9. Quem marcou o gol da vitória do Liverpool contra o Flamengo "
             "na final do Mundial de Clubes de 2019? ");
      deu_certo = scanf("%s", resposta);
      if (strcmp(resposta, "Firmino") == 0) {
        printf("Correto!\n");
        pontuacao++;
      } else {
        printf("Errado! A resposta correta é: Firmino\n");
      }

      // Pergunta 10
      printf("10. Quando foi o primeiro título do Flamengo na Copa do Brasil? ");
      deu_certo = scanf("%s", resposta);
      if (strcmp(resposta, "1990") == 0) {
        printf("Correto!\n");
        pontuacao++;
      } else {
        printf("Errado! A resposta correta é: 1990\n");
      }

      // Adicionar o jogador ao ranking
      int posicao = -1;
      for (int i = 0; i < MAX_JOGADORES; i++) {
        if (strcmp(nomes[i], "-") == 0) {
          posicao = i;
          break;
        }
      }

      if (posicao != -1) {
        strcpy(nomes[posicao], nome_jogador);
        pontuacoes[posicao] = pontuacao;
      } else {
        printf("Ranking cheio! Não é possível adicionar mais jogadores.\n");
      }

      printf("\nFim do quiz! Sua pontuação foi: %d\n", pontuacao);
      break;
    }
    case 2:
      printf("\n-- Ranking --\n");
      for (int i = 0; i < MAX_JOGADORES; i++) {
        printf("%d. %s - %d\n", i + 1, nomes[i], pontuacoes[i]);
      }
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida! Tente novamente.\n");
    }
  } while (opcao != 3);

  return 0;
}