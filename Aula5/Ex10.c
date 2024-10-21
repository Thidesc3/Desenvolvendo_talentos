/* 10. Faça um programa que leia um vetor vet de 10 elementos e obtenha um vetor w cujos componentes são
os fatoriais dos respectivos componentes de vet. */

#include <stdio.h>

int fatorial(int n) {
    if(n == 0) return 1;
    int resultado = 1;
    for(int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int vet[10], w[10], i;

    printf("Digite 10 números inteiros:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 10; i++) {
        w[i] = fatorial(vet[i]);
    }

    printf("Vetor de fatoriais:\n");
    for(i = 0; i < 10; i++) {
        printf("%d! = %d\n", vet[i], w[i]);
    }

    return 0;
}
