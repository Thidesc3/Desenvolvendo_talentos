/* 4. Faça um programa que calcule e imprima o fatorial de um número, usando uma função que receba um valor
e retorne o fatorial desse valor. */

#include <stdio.h>

// por conta do tamanho possivel dos nuemeros terie que usar long long int
long long int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int numero;
    long long int resultado;


    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);
    resultado = fatorial(numero);

    printf("O fatorial de %d é %lld\n", numero, resultado);

    return 0;
}
