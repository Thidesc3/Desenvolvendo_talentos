/* Crie um programa que leia um vetor de 20 inteiros e um número inteiro. O programa deve buscar o número no vetor e informar a posição em que ele aparece (ou se não foi encontrado). */

#include <stdio.h>

int main() {
    int vetor[20];
    int i, numero, encontrado = 0;

    printf("Digite 20 numeros inteiros:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero para buscar no vetor: ");
    scanf("%d", &numero);
r
    for (i = 0; i < 20; i++) {
        if (vetor[i] == numero) {
            printf("Numero encontrado na posição %d\n", i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Numero não encontrado!\n");
    }

    return 0;
}
