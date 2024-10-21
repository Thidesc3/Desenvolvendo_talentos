/* 3. Construa uma programa em C que armazene 15 números em um vetor e imprima uma listagem numerada */

#include <stdio.h>

int main() {
    int numeros[15], i;

    printf("Digite 15 números:\n");
    for(i = 0; i < 15; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Listagem:\n");
    for(i = 0; i < 15; i++) {
        if(numeros[i] % 2 == 0) {
            printf("%d - %d é par\n", i + 1, numeros[i]);
        } else {
            printf("%d - %d é ímpar\n", i + 1, numeros[i]);
        }
    }

    return 0;
}
