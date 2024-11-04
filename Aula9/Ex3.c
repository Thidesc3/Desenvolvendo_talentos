/* 3. Faça um programa em C que leia o valor de um ângulo em graus e o converta, utilizando uma função, para
radianos e ao final imprima o resultado. Veja a fórmula de cálculo a seguir.

Em que:
• rad = ângulo em radianos
• ang = ângulo em graus
• pi = número do pi */

#include <stdio.h>
#include <math.h>

// Função para converter graus para radianos
double conversor(double ang) {
    return ang * M_PI / 180.0;
}

int main() {
    double angulo, radianos;

    printf("Digite o valor do ângulo em graus: ");
    scanf("%lf", &angulo);
    radianos = conversor(angulo);

    printf("O valor do angulo fica: %lf\n", radianos);

    return 0;
}
