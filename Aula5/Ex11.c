/* 11. Construa um programa que leia dados para um vetor de 100 elementos inteiros. Imprimir o maior e o
menor, sem ordenar, o percentual de números pares e a média dos elementos do vetor. */

#include <stdio.h>

int main() {
    int vetor[100], i, maior, menor, pares = 0;
    float media = 0.0;

    printf("Digite 100 números inteiros:\n");
    for(i = 0; i < 100; i++) {
        scanf("%d", &vetor[i]);
        media += vetor[i];
        if(vetor[i] % 2 == 0) pares++;
        if(i == 0 || vetor[i] > maior) maior = vetor[i];
        if(i == 0 || vetor[i] < menor) menor = vetor[i];
    }

    media /= 100.0;

    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Percentual de números pares: %.2f%%\n", (pares / 100.0) * 100);
    printf("Média dos elementos: %.2f\n", media);

    return 0;
}
