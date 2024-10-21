/* 4 Faça um programa que armazene 8 números em um vetor e imprima todos os números. Ao final, imprima
o total de números múltiplos de seis. */

#include <stdio.h>

int main() {
    int numeros[8], i, multiplos_de_seis = 0;

    printf("Digite 8 números:\n");
    for(i = 0; i < 8; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Números digitados:\n");
    for(i = 0; i < 8; i++) {
        printf("%d\n", numeros[i]);
        if(numeros[i] % 6 == 0) {
            multiplos_de_seis++;
        }
    }

    printf("Total de múltiplos de seis: %d\n", multiplos_de_seis);

    return 0;
}
