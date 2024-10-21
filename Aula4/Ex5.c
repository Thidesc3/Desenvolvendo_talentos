// 5) Faça um programa em C que imprima todos os valores pares entre 1 e 20.

#include <stdio.h>

int main(){
    int i;

    for(i = 0; i <= 20 ; i += 2)
        printf("%d\n", i);


    return 0;
}