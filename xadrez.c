#include <stdio.h>

int main() {
    // Constantes para quantidade de movimentos de cada peça
    const int BISPO_MOV = 5;
    const int TORRE_MOV = 5;
    const int RAINHA_MOV = 8;

    // Mensagem inicial
    printf("=== MateCheck - Nível Novato ===\n\n");

    // Simulação do movimento do BISPO (diagonal superior direita)
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < BISPO_MOV; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\n");

    // Simulação do movimento da TORRE (direita)
    printf("Movimento da Torre:\n");
    int j = 0;
    while (j < TORRE_MOV) {
        printf("Direita\n");
        j++;
    }

    printf("\n");

    // Simulação do movimento da RAINHA (esquerda)
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < RAINHA_MOV);

    printf("\nFim do desafio MateCheck!\n");

    return 0;
}
