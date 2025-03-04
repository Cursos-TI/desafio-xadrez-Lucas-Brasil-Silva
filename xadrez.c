#include <stdio.h>

// Função responsável por simular os movimentos da Torre.
void moverTorre(int casas) {
    if ( casas > 0) 
    {
        printf("Direita!\n"); //Imprime os movimentos da Torre.
        moverTorre(casas - 1);
    }
}

// Função responsável por simular o movimento da Rainha.
void moverRainha(int casas) {
    if (casas > 0)
    {
        printf("Esquerda!\n"); //Imprime os movimentos da Rainha.
        moverRainha(casas - 1);
    }
}

// Função responsável por  simular o movimento em diagonal do bispo, alternando em cima e direita.
void moverBispo(int casas) {
    if (casas > 0)
    {
        //Loops aninhados responsáveis por simular o movimento diagonal, o loop externo simula o movimento para cima e o loop interno simula a direita.
        for (int i = 0; i < 1; i++)
        {
            printf("Cima! ");
            for (int j = 0; j < 1; j++)
            {
                printf("Direita!\n");
            }
        }
        moverBispo(casas - 1);
    }
}

// Funçao responsável por simular o movimento do cavalo.
void moverCavalo(int casas) {

    // Loops aninhados responsáveis por simular o movimento em L do cavalo, o loop externo simula o movimento para cima e o loop interno simula a direita, formando um movimento incompleto da peça.
    for (int i = 1; i < casas; i++)
    {
        printf("Cima!\n");
        for (int j = 2; j == i; j++)
        {
            printf("Direita!\n");
        }
    }
}

// Este programa simula os movimentos de 4 peças de xadrez: Torre, Bispo, Rainha e Cavalo. Além de imprime na tela os comandos de movimento de cada uma delas.
int main() {
    
    // Declaração das constantes com o número de movimentos das peças.
    const int torreMovimento = 5;
    const int bispoMovimento = 5;
    const int rainhaMovimento = 8;
    const int cavaloMovimento = 3;
    
    // Chama as funções correspondentes para simular os movimentos
    moverTorre(torreMovimento);
    moverRainha(rainhaMovimento);
    moverBispo(bispoMovimento);
    moverCavalo(cavaloMovimento);
    
    return 0;
}