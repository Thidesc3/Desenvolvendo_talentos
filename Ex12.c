/* 12. Dado um país A, com 5 milhões de habitantes e uma taxa de natalidade de 3% ao
ano, e um país B com 7 milhões de habitantes e uma taxa de natalidade de 2% ao
ano, fazer um programa que calcule e imprima o tempo necessário para que a
população do país A ultrapasse a população do país B. */
#include <stdio.h>

int main() {
    double A = 5000000, B = 7000000, nascimentosA = 0.03, nascimentosB = 0.02, anos = 0;

    while (A <= B) {
        A += A * nascimentosA;
        B += B * nascimentosB;
        anos++;
    }

    printf("Levara %.0f para o pais A passar o pais B.\n", anos);

    return 0;
}