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


void queenMove(int number, int steps){
  if(number <= 0 || number > 8){
    return;
  }

  int stepsTaken = steps;

  printf("Passo: %d - Esquerda\n", stepsTaken);

  queenMove(number - 1, steps + 1);
} 

void bishopMove(int direnction, int bishopSteps){
  if(bishopSteps == 0 || bishopSteps > 8) return;

  char *direction;

  switch (direnction) {
     case 0:
      direction = "Diagonal superior esquerda";
      break;

    case 1:
      direction = "Diagonal superior direita";
      break;

    case 2:
      direction = "Diagonal inferior esquerda";
      break;

    case 3:
      direction = "Diagonal inferior direita";
      break;
  
    default:
      direction = "Diagonal superior direita";
      break;
  }

  for (int i = 1; i <= bishopSteps; i++) {
    
    for (int j = 1; j <= 1; j++) {
      printf("Passo %d: - %s\n", i, direction);
    }
  }

}

void towerMove(int number, int steps){
  if(number <= 0 || number > 8){
    return;
  }

  int stepsTaken = steps;

  printf("Direita\n");
  towerMove(number - 1, steps + 1);
}

void horseMove(int direnction, int side, int horse){
  if(horse <= 0 || horse > 8) return;

  char *direction;
  char *turnSide;
  int steps = 0;

  turnSide = (side == 0) ? "Virou Esquerda" : "Virou Direita";

  switch (direnction) {
    case 0:
      direction = "Reto para Esqueda";
      break;

    case 1:
      direction = "Reto para Cima";
      break;

    case 2:
      direction = "Reto para Direita";
      break;

    case 3:
      direction = "Reto para Baixo";
      break;
  
    default:
      direction = "Reto para Cima";
      break;
  }

  for (int i = 0, j = 0; i <= horse; i++){

    if(j < 2 ){
      printf("%s\n", direction);
      j++;
    }

    if(i == 3){
      printf("%s\n", turnSide);
    }
  }
}

int main() {
  int queen = 0;
  int bishop = 0;
  int bishopDirection = 0;

  int tower = 0;

  int horse = 3;
  int horseDirection = 0;
  int horseSide = 0;

  // Recebe a quantidade de movimentos para cada peça.
  printf("Escolha quantos movimentos a peças deve fazer.\n");

  printf("1 - Movimentação da Rainha: ");
  scanf("%d", &queen);


  //Define para qual a direção e a quantidade de casas que o bispo vai andar
  printf("2 - Movimentação do Bispo -\n");
  printf("Diagonal superior esquerda: 0\n");
  printf("Diagonal superior direita: 1\n");
  printf("Diagonal inferior esquerda: 2\n");
  printf("Diagonal inferior direita: 3\n");

  printf("Escolha a direção: ");
  scanf("%d", &bishopDirection);
  
  printf("Escolha quantas casas ele vai andar: ");
  scanf("%d", &bishop);


  printf("3 - Movimentação da Torre: ");
  scanf("%d", &tower);

  //Define para qual direção o cavalo vai andar
  printf("4 - Movimentação do Cavalo:\n");
  printf("Direção(0 - Esquerda | 1 - Cima | 2 - Direita | 3 - Baixo): ");
  scanf("%d", &horseDirection);

  //Define para qual lado o cavalo vai virar
  printf("Lado(0 - Esquerda | 1 - Direita): ");
  scanf("%d", &horseSide);


  // Exibe os resultados das movimentações.

  printf("\n--- Resultado ---\n");

  printf("Movimento da Rainha: %d\n", queen);
  queenMove(queen, 1);

  printf("====================\n");

  printf("Movimento do Bispo: %d\n", bishop);
  bishopMove(bishopDirection, bishop);

  printf("====================\n");

  printf("Movimento da Torre: %d\n", tower);
  towerMove(tower, 1);

  printf("====================\n");
  printf("Movimento do Cavalo: %d\n", horse);
  horseMove(horseDirection, horseSide, horse);

  return 0;
}
