/* 6) Crie um programa em C que imprima os 20 primeiros termos da série de Fibonacci.
Observação: os dois primeiros termos desta série são 1 e 1 e os demais são gerados
a partir da soma dos anteriores. Exemplo:
• 1 + 1 = 2, terceiro termo;
• 1 + 2 = 3, quarto termo, etc. */

#include <stdio.h>
#include <string.h>

int main(){
    int n1 =1, n2 =1, resul = 2, i, j;
    printf("\n    %d + %d = %d\n", n1, n2, resul);

// tentei fazer a sequencia de fibonacci alinhada, foi o melhor que eu consegui
    for (i = 2; i <= 6; i++){
        for (j = 1; j <= i; j++){
            printf("    ");}
        n1 = n2;
        n2 = resul;
        resul = n1 + n2;
        printf("%d + %d = %d\n", n1, n2, resul);
    
    }
}