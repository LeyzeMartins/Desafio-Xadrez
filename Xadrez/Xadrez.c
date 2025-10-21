

// Inclui a biblioteca padrão de entrada/saída para usar a função printf
#include <stdio.h>

int main() {
    
    // --- Definição das Variáveis ---
    
    int movimentos_torre = 5;
    int movimentos_bispo = 5;
    int movimentos_rainha = 8;

    // Variável de controle que será usada nos loops
    int i;

    printf("### Simulação de Movimentos de Xadrez  ###\n\n");

    // ==================================================
    //   Movimento da Torre (usando loop 'for')
    // ==================================================
    // A Torre deve mover 5 casas para a Direita.
    
    printf("--- 1. Movimento da Torre  ---\n");
    printf("Movendo %d casas para a Direita...\n", movimentos_torre);

    // O loop 'for' vai de i=0 até i=4 (total de 5 vezes)
    for (i = 0; i < movimentos_torre; i++) {
        printf("Direita\n");
    }

    // ==================================================
    //     Movimento do Bispo (usando loop 'while')
    // ==================================================
    // O Bispo deve mover 5 casas na diagonal (Cima, Direita).

    printf("\n--- 2. Movimento do Bispo  ---\n");
    printf("Movendo %d casas para Cima, Direita...\n", movimentos_bispo);

    // Reinicia o contador para o novo loop
    i = 0; 

    // O 'while' continua enquanto 'i' for menor que 5
    while (i < movimentos_bispo) {
        printf("Cima, Direita\n");
        
        // Incrementa o 'i' para não ficar em loop infinito
        i++;
    }

    // ==================================================
    //              Movimento da Rainha (do- While)
    // ==================================================
    // A Rainha deve mover 8 casas para a Esquerda.

    printf("\n---  3. Movimento da Rainha  ---\n");
    printf("Movendo %d casas para Esquerda...\n", movimentos_rainha);

    // Reinicia o contador
    i = 0;

    // O 'while' primeiro executa o bloco...
    do {
        printf("Esquerda\n");
        
        // Incrementa o 'i'
        i++;

    } while (i < movimentos_rainha); // ...e  checa se 'i' é menor que 8

    printf("\n### Concluído! ###\n");

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}