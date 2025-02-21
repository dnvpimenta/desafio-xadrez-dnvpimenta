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

    // Jogada do Cavalo: 2 casas para baixo e 1 casa para a esquerda (usando loops aninhados)
    printf("\nMovimento do Cavalo:\n");
    int casasAbaixo = 2;
    int casasEsquerda = 1;

    for (int i = 1; i <= casasAbaixo; i++) {
        printf("Baixo\n");
    }

    int i = 1;
    while (i <= casasEsquerda) {
        printf("Esquerda\n");
        i++;
    }

    return 0;
}