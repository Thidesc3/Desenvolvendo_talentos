/* Escreva um programa que leia uma matriz 3×33 \times 33×3 de inteiros e mostre a soma dos elementos de cada linha e de cada coluna. */

#include <stdio.h>

int main() {
    int matriz[3][33];
    int i, j;
    int somaLinha[3] = {0};
    int somaColuna[33] = {0};

    printf("Digite os elementos da matriz 3x33:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 33; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 33; j++) {
            somaLinha[i] += matriz[i][j];
            somaColuna[j] += matriz[i][j];
        }
    }

    printf("Soma dos elementos de cada linha:\n");
    for (i = 0; i < 3; i++) {
        printf("Linha %d: %d\n", i + 1, somaLinha[i]);
    }

    printf("Soma dos elementos de cada coluna:\n");
    for (j = 0; j < 33; j++) {
        printf("Coluna %d: %d\n", j + 1, somaColuna[j]);
    }

    return 0;
}
