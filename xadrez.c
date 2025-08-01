#include <stdio.h>

// Torre
void moverTorre(int casa) {
    if (casa > 5) return;
    printf("Torre - Casa %d: Direita\n", casa);
    moverTorre(casa + 1);
}

// Rainha
void moverRainha(int casa) {
    if (casa > 8) return;
    printf("Rainha - Casa %d: Esquerda\n", casa);
    moverRainha(casa + 1);
}

// Bispo
void moverBispo(int passo) {
    if (passo > 5) return;

    // loop vertical
    for (int v = passo; v <= passo; v++) {
        // loop horizontal
        for (int h = 1; h <= 1; h++) {
            printf("Bispo - Casa %d: Cima Direita\n", passo);
        }
    }

    moverBispo(passo + 1);
}

// Cavalo

void moverCavalo() {
    printf("\n--- Cavalo - Movimento em L (Cima e Direita) ---\n");
    for (int cima = 1; cima <= 2; cima++) {
        for (int direita = 1; direita <= 2; direita++) {
        
            if (cima == 2 && direita == 1) {
                printf("Cavalo - Movimento em L: Cima %d, Direita %d\n", cima, direita);
                break;
            }

            continue;
        }
    }
}

// Funcao Principal
int main() {
  
    // Torre
    printf("\nTorre\n");
    moverTorre(1);

    // Rainha
    printf("\nRainha\n");
    moverRainha(1);

    // Bispo
    printf("\nBispo\n");
    moverBispo(1);

    // Cavalo
    moverCavalo();

    printf("\nTodos os movimentos foram executados com sucesso!\n");
    return 0;
}
