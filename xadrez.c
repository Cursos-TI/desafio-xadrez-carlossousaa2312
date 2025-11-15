#include <stdio.h>
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// ===========Nível Mestre - Funções Recursivas e Loops Aninhados============

// Implementação de Movimentação da Torre
    //Função recursiva que move a Torre para cima(5 casas).
    //Cada chamada recursiva representa UMA casa.
    void moverTorre(int casas) {
        if (casas > 0) {
            printf("Direita\n");
            moverTorre(casas - 1);
        }
    }

    // Implementação de Movimentação do Bispo
    //Bispo com recursividade e loops aninhados.
    //Movimento diagonal: para cima + direita(5 casas).
    void moverBispoRecursivo(int casas) {
        if (casas > 0) {
            printf("Cima e Direita\n");
            moverBispoRecursivo(casas - 1);
        }   
    }
    //Bispo também deve usar loops aninhados:
    //Loop externo = movimento vertical
    //Loop interno = movimento horizontal
    void moverBispoLoops(int casas) {
        for (int v = 1; v <= casas; v++)      // vertical
        {
            for (int h = 1; h <= 1; h++)      // horizontal (1 casa para cada casa vertical)
            {
                printf("Cima e Direita\n");
            }
            
        }
        
    }

    // Implementação de Movimentação da Rainha
    //A Rainha combina Torre + Bispo.
    //Aqui o movimento será em linha reta para a direita (8 casas).
    void moverRainha(int casas) {
        if (casas > 0)
        {
            printf("Esquerda\n");
            moverRainha(casas - 1);
        }
    }

    // Implementação de Movimentação do cavalo
    // Neste desafio: 2 casas para cima e 1 casa para direita.
    void moverCavalo() {
    int casasCima = 2;
    int casasDireita = 1;

    //Repete CIMA 2 vezes
    for (int i = 1; i <= casasCima; i++)
    {
        printf("Cima\n");
        if (casasCima == 2)
        {
            continue;
        }

    }
    for (int i = 1, j = 1; i <= 1 && j <= 1; i++, j++) {
        printf("Direita\n");
        break;     // encerra, já que Cavalo só anda 1 casa horizontal
    }
    }

    int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("===== MOVIMENTO DA TORRE (Recursivo) =====\n");
    moverTorre(casasTorre);

    printf("\n===== MOVIMENTO DO BISPO (Recursivo) =====\n");
    moverBispoRecursivo(casasBispo);

    printf("\n===== MOVIMENTO DO BISPO (Loops Aninhados) =====\n");
    moverBispoLoops(casasBispo);

    printf("\n===== MOVIMENTO DA RAINHA (Recursivo) =====\n");
    moverRainha(casasRainha);

    printf("\n===== MOVIMENTO DO CAVALO (Loops Complexos) =====\n");
    moverCavalo();

     printf("\nMovimentos concluídos!\n");

    return 0;
}
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.