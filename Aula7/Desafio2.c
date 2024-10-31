/* Escreva um programa que leia dois vetores de inteiros, cada um com 10 elementos já ordenados em ordem crescente. O programa deve intercalar esses dois vetores em um terceiro, mantendo a ordem crescente. */

#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], vetorInter[20];
    int i, j, k;

    printf("Digite 10 números inteiros ordenados para o primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }


    printf("Digite 10 números inteiros ordenados para o segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    i = 0;
    j = 0;
    k = 0;
    while (i < 10 && j < 10) {
        if (vetor1[i] < vetor2[j]) {
            vetorInter[k] = vetor1[i];
            i++;
        } else {
            vetorInter[k] = vetor2[j];
            j++;
        }
        k++;
    }


    while (i < 10) {
        vetorInter[k] = vetor1[i];
        i++;
        k++;
    }

    while (j < 10) {
        vetorInter[k] = vetor2[j];
        j++;
        k++;
    }


    printf("Vetor intercalado:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetorInter[i]);
    }
    printf("\n");

    return 0;
}
