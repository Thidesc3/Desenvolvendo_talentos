/* 5. Faça um programa que permita entrar com valores em uma matriz A de tamanho 3 X 4. Gerar e imprimir uma matriz B que é o triplo da matriz A. */

#include <stdio.h>
#include <unistd.h>

int main() {
    int matriz1[3][4], matriz2[3][4];
    int i, j;

    printf("Digite os valores para a matriz 1:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            matriz2[i][j] = 3 * matriz1[i][j];
        }
    }
    printf("\nGerando a multiplicação da matriz1\n");
    printf("-------------------------\n");
    sleep(1);
    printf("Matriz 2 ficou:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
