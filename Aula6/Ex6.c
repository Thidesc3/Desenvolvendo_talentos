/* 6) Crie um programa que leia valores inteiros em uma matriz A[2][2] e em uma matriz B[2][2]. Gerar e imprimir a matriz
SOMA[2][2]. */
#include <stdio.h>
#include <unistd.h>

int main(){
    int i, j;
    int matrizA[2][2], matrizB[2][2], soma[2][2];

// pegando os elementos para a matriz A
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("%d) Escreve os elementos da matrizA: ", i);
            scanf("%d", &matrizA[i][j]);
        }
        printf("\n");
    }

// Pegando os elementos para a matrizB
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("%d) Escreve os elementos da matrizB: ", i);
            scanf("%d", &matrizB[i][j]);
        }
    printf("\n");
    }

// fazendo a soma
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            soma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
   
// imprimindo o resultado
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("%d", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
