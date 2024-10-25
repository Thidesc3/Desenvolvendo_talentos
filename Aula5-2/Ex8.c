/* 8. Faça um programa que leia uma matriz 4 X 5 de inteiros, calcule e imprima a soma de todos os seus elementos. */

#include <stdio.h>
int main(){
    int i, j;
    int matriz[4][5], soma;


// pegando os elemtos da matriz
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d) Digite os elementos da matriz: ", i);
            scanf("%d", &matriz[i][j]);
        }
    printf("\n");
    }


// somando a matriz 
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            soma += matriz[i][j];
        }
    printf("\n");
    }

// imprimindo o resultado
    printf("A soma da matriz e de: %d", soma);
    
}