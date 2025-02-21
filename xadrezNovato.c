#include <stdio.h>

int main() {
    // Jogada da Torre: 5 casas para a direita (usando for)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Jogada do Bispo: 5 casas na diagonal para cima e à direita (usando while)
    printf("\nMovimento do Bispo:\n");
    int bispo = 1;
    while (bispo <= 5) {
        printf("Cima, Direita\n");
        bispo++;
    }

    // Jogada da Rainha: 8 casas para a esquerda (usando do-while)
    printf("\nMovimento da Rainha:\n");
    int rainha = 1;
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);

    return 0;
}