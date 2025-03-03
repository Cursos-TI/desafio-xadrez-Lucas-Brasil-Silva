#include <stdio.h>

// Este programa simula os movimentos de 3 peças de xadrez: Torre, Bispo e Rainha. Além de imprime na tela os comandos de movimento de cada uma delas.
int main() {
    
    // Declaração das constantes com o número de movimentos das peças.
    const int torreMovimento = 5;
    const int bispoMovimento = 5;
    const int rainhaMovimento = 8;
    const int cavaloMovimento = 3;
    
    // Declaração das variáveis de iteraçào dos loops.
    int j = 0;
    int i = 0;
    int c = 1;

    // Move a Torre 5 casas para a Direita.
    do {
        printf("Direita!\n"); //Imprime os movimentos da Torre.
        i++;
    } while (i < torreMovimento);

    // Move o Bispo 5 casas para Cima e Direita.
    while (j < bispoMovimento)
    {
        printf("Cima, Direita!\n"); //Imprime os movimentos do Bispo.
        j++;
    }
    
    // Move a rainha 8 casas para a esquerda.
   for (int h = 0; h < rainhaMovimento; h++)
   {
    printf("Esquerda!\n"); //Imprime os movimentos da Rainha.
   }

   // Move o Cavalo 2 casas para baixo e 1 para a esquerda.
   while (c < cavaloMovimento)
   {
    printf("Baixo!\n");

    // Faz o último movimento do cavalo para a esquerda, quando já tiver sido movido 2 casas para baixo.
    for (int f = 2; f == c; f++)
    {
        printf("Esquerda!");
    }
    c++;

   }
    
    return 0;
}

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.