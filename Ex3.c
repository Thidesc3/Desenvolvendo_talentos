// 3. Faça um programa que imprima os múltiplos de 5, no intervalo de 1 até 500.

#include <stdio.h>
#include <unistd.h>

int main(){
    int i;

    for(i = 0; i <= 500 ; i += 5)
    printf("%d\n", i);


    return 0;
}