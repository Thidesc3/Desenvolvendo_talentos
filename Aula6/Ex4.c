/* 4. Construa um programa que armazene dados em uma matriz de ordem 4 e imprima:
Todos os elementos com números ímpares. */

#include <stdio.h>

int main(){
    int i, j;
    int matriz[4][4];

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("%d) Digite um numero: ", i);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (matriz[i][j] % 2 != 0){
                printf("%d", matriz[i][j]);
            }
        }
        printf("\n");
    }
    
return 0;
}