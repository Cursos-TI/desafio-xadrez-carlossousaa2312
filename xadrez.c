#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casasBispo = 5;
    int casasTorre = 5;
    int casasRainha = 8;
    int b = 1;
    int r = 1;
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // O bispo move-se na diagonal — neste caso, 5 casas para cima e à direita.
    printf("====Movimento do BiSPO====\n");
    while (b <= casasBispo) 
    {
        printf("Casa %d: Cima, Direita\n", b);
        b++;
    }
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // A torre move-se em linha reta — neste caso, 5 casas para a direita.
    printf("\n=== Movimento da TORRE ===\n");
    for (int t = 1; t <= casasTorre; t++) 
    {
        printf("Casa %d: Direita\n", t);
    }
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // A rainha pode mover-se em todas as direções — aqui, 8 casas para a esquerda.
    printf("\n====Movimento da RAINHA====\n");
    do
    {
        printf("Casa %d: Esquerda\n", r);
        r++;
    } while (r <= casasRainha);

    printf("\nMovimentos concluídos!\n");
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
