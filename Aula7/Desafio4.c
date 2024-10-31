/* Faça um programa que leia uma matriz 3×33 \times 33×3 e ordene cada coluna da matriz de forma independente em ordem crescente usando o algoritmo Bubble Sort. */


#include <stdio.h>

// Função Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int matriz[3][33];
    int i, j;

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 33; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (j = 0; j < 33; j++) {
        int coluna[3];
        for (i = 0; i < 3; i++) {
            coluna[i] = matriz[i][j];
        }

        bubbleSort(coluna, 3);

        for (i = 0; i < 3; i++) {
            matriz[i][j] = coluna[i];
        }
    }
    printf("Matriz ordenada:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 33; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
