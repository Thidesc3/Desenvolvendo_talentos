/* 9. Faça um programa em C que leia dois conjuntos de números inteiros, tendo cada um 10 elementos. Ao
final o programa deve listar os elementos comuns aos conjuntos. */

#include <stdio.h>

int main() {
    int conjunto1[10], conjunto2[10], i, j;

    printf("Digite 10 números inteiros para o primeiro conjunto:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &conjunto1[i]);
    }

    printf("Digite 10 números inteiros para o segundo conjunto:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &conjunto2[i]);
    }

    printf("Elementos comuns aos dois conjuntos:\n");
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            if(conjunto1[i] == conjunto2[j]) {
                printf("%d ", conjunto1[i]);
                break; // Para evitar duplicatas
            }
        }
    }

    return 0;
}
