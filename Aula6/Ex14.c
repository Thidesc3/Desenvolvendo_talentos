/* 14. Crie um programa que leia e armazene os elementos de uma matriz inteira com tamanho 5 X 5 e
imprimi-la. Troque, a seguir:
• a segunda linha pela quinta;
• a terceira coluna pela quinta;
• a diagonal principal pela diagonal secundária. */

#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j, temp;

// pegando os elementos da matriz
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite os elementos da matriz 5x5:\n");
            scanf("%d", &matriz[i][j]);
        }
    }

// Imprimindo a matriz original para testar
    printf("Matriz original:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

// Trocando a segunda linha pela quinta
    for (j = 0; j < 5; j++) {
        temp = matriz[1][j];
        matriz[1][j] = matriz[4][j];
        matriz[4][j] = temp;
    }

// Trocan a terceira coluna pela quinta
    for (i = 0; i < 5; i++) {
        temp = matriz[i][2];
        matriz[i][2] = matriz[i][4];
        matriz[i][4] = temp;
    }

// Trocando a diagonal principal pela diagonal secundária
    for (i = 0; i < 5; i++) {
        temp = matriz[i][i];
        matriz[i][i] = matriz[i][4 - i];
        matriz[i][4 - i] = temp;
    }

// Imprimindo a matriz com tudo trocado
    printf("Matriz modificada:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
