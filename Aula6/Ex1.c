/* 1. Faça um programa em C que leia os elementos de uma matriz do tipo inteiro com tamanho 10 X 10. Ao final, imprima
todos os elementos. */

#include <stdio.h>

int main(){
    int i, j;
    int matriz[10][10];

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            printf("%d) Digite um nuemro :", i);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Resultado da matriz\n");
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

return 0;
}