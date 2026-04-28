#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Novato - Movimentação das Peças
  // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

  // Implementação de Movimentação do Bispo
  // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

  // Implementação de Movimentação da Torre
  // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

  // Implementação de Movimentação da Rainha
  // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

  // Nível Aventureiro - Movimentação do Cavalo
  // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
  // Um loop pode representar a movimentação horizontal e outro vertical.

  // Nível Mestre - Funções Recursivas e Loops Aninhados
  // Sugestão: Substitua as movimentações das peças por funções recursivas.
  // Exemplo: Crie uma função recursiva para o movimento do Bispo.

  // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
  // Inclua o uso de continue e break dentro dos loops.

int main() {
  int queen = 0;
  int bishop = 0;
  int tower = 0;
  int horse = 3;
  int horseDirection = 0;

  // Recebe a quantidade de movimentos para cada peça.
  printf("Escolha quantos movimentos a peças deve fazer.\n");
  printf("1 - Movimentação da Rainha: ");
  scanf("%d", &queen);
  printf("\n2 - Movimentação do Bispo: ");
  scanf("%d", &bishop);
  printf("\n3 - Movimentação da Torre: ");
  scanf("%d", &tower);
  printf("\n4 - Movimentação do Cavalo (Esquerda: 0 | Direita: 1): ");
  scanf("%d", &horseDirection);

  // Exibe os resultados das movimentações.
  printf("--- Resultado ---\n");
  printf("Movimento da Rainha: %d\n", queen);

  // Movimento da Rainha com for
  for (int i = 0; i < queen; i++) {
    printf("Esquerda\n");
  }
  printf("====================\n");
  printf("Movimento do Bispo: %d\n", bishop);

  // Movimento do Bispo com while
  while (bishop > 0 ){
    printf("Diagonal direita\n");
    bishop--;
  }
  printf("====================\n");
  printf("Movimento da Torre: %d\n", tower);

  // Movimento do Torre com do while
  do{
    if(tower == 0){
      break;
    }

    printf("Direita\n");
    tower--;
  }while (tower > 0);

  printf("====================\n");
  printf("Movimento do Cavalo: %d\n", horse);

  // Movimento do Cavalo com do while
  do{

    for(int i = 0; i < 2; i++){
      printf("Baixo\n");
    }

    horseDirection == 0 ? printf("Esquerda\n") : printf("Direita\n");
  } while(horse != 3);

  return 0;
}
