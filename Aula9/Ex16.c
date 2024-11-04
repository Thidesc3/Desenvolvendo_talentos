/* 16. Construa um programa que leia um valor inteiro e retorne se a raiz desse número é exata ou não. Escreva
uma função para fazer a validação. Ao final imprima o resultado. */
#include <stdio.h>
#include <math.h>

int raizExata(int n) {
    int raiz = sqrt(n);
    return (raiz * raiz == n);
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (raizExata(numero)) {
        printf("A raiz de %d é exata.\n", numero);
    } else {
        printf("A raiz de %d não é exata.\n", numero);
    }

    return 0;
}
