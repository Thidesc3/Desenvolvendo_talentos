/* 2) Faça um programa que leia os elementos de uma matriz do tipo inteiro com tamanho 3 X 3 e imprima os elementos
multiplicando por 2. */

#include <stdio.h>

int main(){
    int i, j;
    int matriz[3][3];

    for (i = 0; i < 3; i++){
        for  (j = 0; j < 3; j++){
            printf("%d) Digite numero: ", i);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 3; i++){
       for (j = 0; j < 3; j++){
        matriz[i][j] *= 2;
         printf("%d ", matriz[i][j]);
       }
       printf("\n");
    }
    
    

}