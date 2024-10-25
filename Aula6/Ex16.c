/* 16. Faça um programa em C que possa armazenar as alturas de dez atletas de cinco
delegações que participarão dos jogos de verão. Imprimir a maior altura de cada
delegação. */

#include <stdio.h>

int main() {
    float alturas[5][10];
    float maior_altura[5]; 
    int i, j;

// pegando as alturas dos atletas
    for (i = 0; i < 5; i++) {
        printf("Digite as alturas dos 10 atletas da delegação %d:\n", i + 1);
        for (j = 0; j < 10; j++) {
            scanf("%f", &alturas[i][j]);
        }
    }

// pegando a maior altura de cada delegação
    for (i = 0; i < 5; i++) {
        maior_altura[i] = alturas[i][0];
        for (j = 1; j < 10; j++) {
            if (alturas[i][j] > maior_altura[i]) {
                maior_altura[i] = alturas[i][j];
            }
        }
    }

// Imprimindo a maior altura de cada delegação
    printf("Maior altura de cada delegação:\n");
    for (i = 0; i < 5; i++) {
        printf("Delegação %d: %.2f\n", i + 1, maior_altura[i]);
    }

    return 0;
}
