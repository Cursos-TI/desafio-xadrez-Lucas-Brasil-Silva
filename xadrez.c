#include <stdio.h>

// Este programa simula os movimentos de 3 peças de xadrez: Torre, Bispo e Rainha. Além de imprime na tela os comandos de movimento de cada uma delas.
int main() {
    
    // Declaração das constantes com o número de movimentos das peças.
    const int torreMovimento = 5;
    const int bispoMovimento = 5;
    const int rainhaMovimento = 8;
    
    // Declaração das variáveis de iteraçào dos loops.
    int j = 0;
    int i = 0;

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
    
    return 0;
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.