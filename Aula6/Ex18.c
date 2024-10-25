/* 18. Faça um programa que leia uma matriz 5 X 5 inteira e apresente uma determinada linha da matriz,
solicitada via teclado. */

#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j, linha;

// pegnado os elementos da matriz
    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

// pegindo para o usuario qual linha quer
    printf("Digite o número da linha a ser apresentada: ");
    scanf("%d", &linha);

// Verifica se a linha é válida
    if (linha < 0 || linha > 4) {
        printf("Linha inválida!\n");
    } else {
        // Apresenta a linha solicitada
        printf("Linha %d:\n", linha);
        for (j = 0; j < 5; j++) {
            printf("%d ", matriz[linha][j]);
        }
        printf("\n");
    }

    return 0;
}
