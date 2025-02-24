#include <stdio.h>

// Função recursiva para a jogada da Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para a jogada do Bispo
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para a jogada da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para a jogada do Cavalo com loops aninhados
void moverCavalo() {
    int casasCima = 2;
    int casasDireita = 1;

    // Loop externo para as casas para cima
    for (int i = 1; i <= casasCima; i++) {
        printf("Cima\n");

        // Loop interno para a casa para a direita
        for (int j = 1; j <= casasDireita; j++) {
            if (i == casasCima) {
                printf("Direita\n");
            }
        }
    }
}

// Função para a jogada do Bispo com loops aninhados
void moverBispoComLoops() {
    int casas = 5;

    // Loop externo para o movimento vertical
    for (int i = 1; i <= casas; i++) {
        // Loop interno para o movimento horizontal
        for (int j = 1; j <= casas; j++) {
            if (i == j) {
                printf("Cima, Direita\n");
                break;
            }
        }
    }
}

int main() {
    // Jogada da Torre (recursivo)
    printf("\nJogada da Torre:\n");
    moverTorre(5);

    // Jogada do Bispo (recursivo)
    printf("\nJogada do Bispo:\n");
    moverBispo(5);

    // Jogada da Rainha (recursivo)
    printf("\nJogada da Rainha:\n");
    moverRainha(8);

    // Jogada do Cavalo (loops aninhados)
    printf("\nJogada do Cavalo:\n");
    moverCavalo();

    // Jogada do Bispo (loops aninhados)
    printf("\nJogada do Bispo:\n");
    moverBispoComLoops();

    return 0;
}