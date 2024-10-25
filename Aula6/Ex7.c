/* 7. Construa um programa para ler valores para duas matrizes do tipo inteiro de ordem 3. Gerar e imprimir a matriz diferença. */
#include <stdio.h>
int main(){
    int i, j;
    int matrizA[3][3], matrizB[3][3], matrizDiferenca[3][3];


// lendo elementos para a A
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
           printf("%d) Digite os elementos para a matrizA: ",i);
           scanf("%d", &matrizA[i][j]);
        }
    printf("\n");
    }
// lendo elementos para a B
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
        printf("%d) Digite os elementos para a matrizB: ", i);
           scanf("%d", &matrizB[i][j]);
        }
    printf("\n");
    }

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            matrizDiferenca[i][j] = matrizA[i][j] - matrizB[i][j];
        }  
    }
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", matrizDiferenca[i][j]);
        }
    printf("\n");
    }
}
