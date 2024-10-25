/* 3. Crie um programa que armazene dados inteiros em uma matriz de ordem 5 e imprima: Todos os elementos que se
encontram em posições cuja linha mais coluna formam um número par. */

#include <stdio.h>

int main(){
    int i, j;
    int matriz[5][5];

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("%d) Digite numeros: ", i);
            scanf("%d", &matriz[i][j]);
         }
    }

// imprimindo a matriz original para confirmar se a proxima matriz esta correta
    printf("\nMatriz para confirmacao\n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("%d", matriz[i][j]);
        }
    printf("\n");
    }

    printf("\n\n\n");
    
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if ((i + j) % 2 == 0)
                printf("%d", matriz[i][j]);
        }
        printf("\n");
        
    }
    
    


return 0;

}