#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int torre = 0;
    int bispo = 0;
    int rainha = 0

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    do{
        printf("bispo: cima direita\n");
        bispo++;
    } while (bispo < 5);

    // o printf("\n"); é para deixar o espaço de uma linha entre  as peças      
    printf("\n");


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    while(torre < 5){
        printf("torre: direita\n");
        torre++;
    }

     //novamente o printf("\n"); é para deixar o espaço de uma linha entre  as peças      
    printf("\n");  

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    for(rainha = 0;rainha < 5;rainha++){
        printf("rainha: Esquerda\n");
    }
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    for(cavalo=0; cavalo < 2; cavalo++){
            while(cavalo < 1){
            printf("cavalo:\n");
            printf("baixo\n");
            printf("baixo\n");
            printf("esquerda\n");
            cavalo++;    
      }
    
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
