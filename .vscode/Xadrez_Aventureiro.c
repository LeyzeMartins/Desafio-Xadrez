
#include <stdio.h>

int main() {
    
    // ==================================================
    // 1. CÓDIGO DO NÍVEL NOVATO (Torre, Bispo, Rainha)
    // ==================================================

    // --- Definição das Variáveis (Novato) ---
    int movimentos_torre = 5;
    int movimentos_bispo = 5;
    int movimentos_rainha = 8;
    int i; // Contador

    printf("### Xadrez: Demonstração de Movimentos ###\n\n");

    // --- Movimento da Torre ---
    printf("--- 1. Movimento da Torre ---\n");
    // ... (código do for da torre) ...
    for (i = 0; i < movimentos_torre; i++) {
        printf("Direita\n");
    }

    // --- Movimento do Bispo ---
    printf("\n--- 2. Movimento do Bispo ---\n");
    // ... (código do while do bispo) ...
    i = 0; 
    while (i < movimentos_bispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // --- Movimento da Rainha ---
    printf("\n--- 3. Movimento da Rainha ---\n");
    // ... (código do do-while da rainha) ...
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < movimentos_rainha);


    // ==================================================
    // 2. CÓDIGO DO NÍVEL AVENTUREIRO (Cavalo)
    // ==================================================
    // (Aqui você adiciona o código novo)
    
    // --- Variáveis (Aventureiro) ---
    int casas_baixo = 2;
    int casas_esquerda = 1;
    int movimento_L = 0; // Controle do loop externo

    // --- Movimento do Cavalo ---
    printf("\n--- 4. Movimento do Cavalo (Nível Aventureiro) ---\n");
    printf("Movendo em L: %d casas para Baixo, %d para Esquerda...\n", casas_baixo, casas_esquerda);

    while (movimento_L < 1) {
        
        // Loop FOR aninhado
        for (i = 0; i < casas_baixo; i++) {
            printf("Baixo\n");
        }
        
        // Loop DO-WHILE aninhado
        i = 0;
        do {
            printf("Esquerda\n");
            i++;
        } while (i < casas_esquerda);
        
        movimento_L++; 
    }

    // ==================================================
    // 3. CÓDIGO DO NÍVEL MESTRE (Virá aqui depois)
    // ==================================================
    // (Este espaço fica reservado para o próximo desafio)


    // --- Finalização ---
    printf("\n### Demonstração Concluída! ###\n");

    return 0;
}