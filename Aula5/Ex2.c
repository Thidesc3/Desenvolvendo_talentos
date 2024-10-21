/* 2. Faça um programa que armazene 10 letras em um vetor e imprima uma listagem numerada. */

#include <stdio.h>

int main() {
    char letras[10];
    int i;

    printf("Digite 10 letras:\n");
    for(i = 0; i < 10; i++) {
        scanf(" %c", &letras[i]);
    }

    printf("Listagem numerada:\n");
    for(i = 0; i < 10; i++) {
        printf("%d - %c\n", i + 1, letras[i]);
    }

    return 0;
}
