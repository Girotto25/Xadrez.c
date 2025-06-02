#include <stdio.h>

// Recursão: Movimento da Torre para a direita
void movimentoTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Direita\n");
    movimentoTorre(casasRestantes - 1);
}

// Recursão + loops aninhados: Movimento do Bispo na diagonal cima-direita
void movimentoBispo(int vertical, int horizontal) {
    if (vertical <= 0 || horizontal <= 0) return;
    for (int i = 0; i < horizontal; i++) {
        printf("Direita ");
    }
    printf("\nCima\n\n");
    movimentoBispo(vertical - 1, horizontal - 1);
}

// Recursão: Movimento da Rainha para a esquerda
void movimentoRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Esquerda\n");
    movimentoRainha(casasRestantes - 1);
}

// Loops aninhados e controle de fluxo: Movimento do Cavalo (2 para cima, 1 para a direita)
void movimentoCavalo() {
    printf("Movimento do Cavalo:\n");
    for (int cima = 0; cima < 2; cima++) {
        printf("Cima\n");
        for (int direita = 0; direita < 2; direita++) {
            if (direita == 1) {
                printf("Direita\n");
                break; // cavalo só move 1 vez para a direita
            }
        }
    }
}

int main() {
    int casasTorre = 5;
    int casasBispoVertical = 5;
    int casasBispoHorizontal = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    movimentoTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    movimentoBispo(casasBispoVertical, casasBispoHorizontal);

    printf("\nMovimento da Rainha:\n");
    movimentoRainha(casasRainha);

    printf("\n");
    movimentoCavalo();

    return 0;
}
