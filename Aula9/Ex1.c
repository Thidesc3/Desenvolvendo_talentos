/* 1. Faça um programa em C que leia três números e, para cada um, imprimir o dobro. O cálculo deverá ser
realizado por uma função e o resultado impresso ao final do programa. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int dobro(int x){
    x *= 2;
    return x;
}

int main(){
    int num1[3];
    int i;

// maneira utilizando for e vetor
    for (i = 0; i < 3; i++){
        printf("%d) Digite um numero: ", i);
        scanf("%d", &num1[i]);
    }
    for (i = 0; i < 3; i++){
        num1[i] = dobro(num1[i]);
        printf("%d\n", num1[i]);
    }


// uma maneira mais "bruta" de fazer o programa
/* 
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um numero: ");
    scanf("%d", &num2);
    printf("Digite um numero: ");
    scanf("%d", &num3);

    num1 = dobro(num1);
    num2 = dobro(num2);
    num3 = dobro(num3);
    
    printf("%d, %d, %d", num1, num2, num3); */



return 0;
}