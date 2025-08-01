#include <stdio.h>

int main() {
    // Torre 
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    //Bispo
    printf("\nMovimento do BISPO:\n");
    int j = 1;
    while (j <= 5) {
        printf("Casa %d: Cima Direita na Diagonal\n", j);
        j++;
    }

    // Rainha
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= 8);

    return 0;
}
