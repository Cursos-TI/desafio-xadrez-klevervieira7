#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // movimento do bispo.
    int i = 1;
    printf("\n###### MOVIMENTO DO BISPO ######\n");
    while (i <= 5)
    {
        printf("=== mov. %d - BISPO SE MOVE PARA CIMA E DIREITA ===\n", i);
        i++;
    }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // movimento da torre.
    printf("\n###### MOVIMENTO DA TORRE ######\n");
    for ( int i = 1 ; i <=5 ; i++ )
    {
        printf("=== mov. %d - TORRE SE MOVE PARA DIREITA ===\n", i);
    }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // movimento da rainha
    i = 1;
    printf("\n###### MOVIMENTO DA RAINHA ######\n");
    do
    {
        printf("=== mov. %d - RAINHA SE MOVE PARA ESQUERDA ===\n", i);

        i++;
    } while (i <= 8);
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
