#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita 
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita 
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da Rainha: 8 casas para a esquerda 
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // Movimento do Cavalo: 2 para baixo, 1 para a esquerda (em "L")
    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }

    int m = 0;
    while (m < 1) {
        printf("Esquerda\n");
        m++;
    }

    return 0;
}
