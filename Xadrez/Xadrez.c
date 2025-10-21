#include <stdio.h>

// ==================================================
// 3. NÍVEL MESTRE (Prototipos das Funções)
// ==================================================
//  avisar o 'main' que essas funções existem.
// Elas estão escritas lá no final do arquivo.
void moverTorreRecursivo(int passos);
void moverBispoRecursivo(int passos);
void moverRainhaRecursivo(int passos);


int main() {
    
    // --- Definição das Variáveis ---
    
    // Nível Novato
    int movimentos_torre = 5;
    int movimentos_bispo = 5;
    int movimentos_rainha = 8;

    // Nível Mestre (para o Cavalo)
    int cavalo_passos_verticais = 2; // 2 para Cima
    int cavalo_passos_horizontais = 1; // 1 para Direita
    int v, h; // Variáveis de controle para loops complexos
    
    // Variável de controle genérica 
    int i; 

    printf("### Xadrez: Demonstração de Movimentos (Nível Mestre) ###\n\n");

    // ==================================================
    // 1. NÍVEL NOVATO (Refatorado para Mestre)
    // ==================================================
    // REQUISITO MESTRE: Substituir os loops simples por recursividade.

    // --- Movimento da Torre ---
    printf("--- 1. Movimento da Torre (Recursivo) ---\n");
    printf("Movendo %d casas para a Direita...\n", movimentos_torre);
    
    // O loop 'for' original foi substituído por esta chamada de função recursiva:
    moverTorreRecursivo(movimentos_torre);


    // --- Movimento do Bispo ---
    printf("\n--- 2. Movimento do Bispo (Recursivo + Aninhado) ---\n");
    printf("Movendo %d casas para Cima, Direita...\n", movimentos_bispo);
    
    // O loop 'while' original foi substituído por esta chamada de função recursiva:

    // 1. É recursiva; 2. Contém loops aninhados por dentro.)
    moverBispoRecursivo(movimentos_bispo);


    // --- Movimento da Rainha ---
    printf("\n--- 3. Movimento da Rainha (Recursivo) ---\n");
    printf("Movendo %d casas para Esquerda...\n", movimentos_rainha);

    // O loop 'do-while' original foi substituído por esta chamada de função recursiva:
    moverRainhaRecursivo(movimentos_rainha);


    // ==================================================
    // 2. NÍVEL AVENTUREIRO (Refatorado para Mestre)
    // ==================================================
    // REQUISITO MESTRE: Aprimorar o Cavalo com loops complexos,
    // múltiplas variáveis, 'continue' e 'break'.
    // Novo movimento: 2 Cima, 1 Direita.

    printf("\n--- 4. Movimento do Cavalo (Loops Complexos - Mestre) ---\n");
    printf("Movendo em L: %d casas para Cima, %d para Direita...\n", cavalo_passos_verticais, cavalo_passos_horizontais);

    // Loop aninhado complexo (Nível Mestre)
    // O loop externo (v) controla os passos verticais (Cima)
    for (v = 1; v <= cavalo_passos_verticais; v++) {
        
        printf("Cima\n"); // Move para cima

        // O loop interno (h) controla os passos horizontais (Direita)
        for (h = 1; h <= cavalo_passos_horizontais; h++) {
            
            // CONDIÇÃO COMPLEXA:
            //  mover para a Direita *depois* do
            // último passo para Cima (quando v == 2).
            if (v < cavalo_passos_verticais) {
                // 'continue' para o loop FOR INTERNO.
                // Mas como o 'v' não é 2, ele vai pular
                // o 'printf("Direita\n")' e o 'break'.
                continue; 
            }
            
            // Se 'v' for 2 (último passo vertical), ele não usa o 'continue'
            // e executa a ação horizontal:
            printf("Direita\n");

            // 'break' sai do loop INTERNO (h).
            //  isso porque o cavalo só dá *um* passo
            // para a direita, não importa o valor de 'cavalo_passos_horizontais'.
            break; 
        }
    }

    // ==================================================
    // 3. NÍVEL MESTRE (Implementação das Funções)
    // ==================================================
    // As funções recursivas são definidas *depois* da 'main'.
    // O código acima ( main) apenas 'chama' elas.

    // --- Finalização ---
    printf("\n### Demonstração Concluída! ###\n");

    return 0; // Fim da função 'main'
}


// --------------------------------------------------
// IMPLEMENTAÇÃO DAS FUNÇÕES RECURSIVAS (NÍVEL MESTRE)
// --------------------------------------------------


void moverTorreRecursivo(int passos) {
    // 1. Caso Base (Condição de Parada):
    // Se não há mais passos, a função para de se chamar.
    if (passos <= 0) {
        return; 
    }
    
    // 2. Ação (O que a função faz neste passo):
    printf("Direita\n");
    
    // 3. Chamada Recursiva:
    // A função chama a si mesma, mas com 'passos - 1'.
    moverTorreRecursivo(passos - 1);
}



void moverBispoRecursivo(int passos) {
    // 1. Caso Base (Condição de Parada):
    if (passos <= 0) {
        return;
    }

    // 2. Ação (Requisito: com loops aninhados V/H):
    // Usamos os loops aninhados para simular UMA etapa do movimento.
    // Mesmo que eles rodem só uma vez, cumpre o requisito.
    
    // Loop "vertical" (externo)
    for (int v = 0; v < 1; v++) {
        // Loop "horizontal" (interno)
        for (int h = 0; h < 1; h++) {
            // Ação do passo diagonal
            printf("Cima, Direita\n"); 
        }
    }

    // 3. Chamada Recursiva:
    moverBispoRecursivo(passos - 1);
}



void moverRainhaRecursivo(int passos) {
    // 1. Caso Base (Condição de Parada):
    if (passos <= 0) {
        return;
    }
    
    // 2. Ação (O que a função faz neste passo):
    printf("Esquerda\n");
    
    // 3. Chamada Recursiva:
    moverRainhaRecursivo(passos - 1);


    return 0;
}














