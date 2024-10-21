/* 29. Construa um programa que receba o valor e o código de várias mercadorias vendidas em
um determinado dia. Os códigos obedecem a lista a seguir:

L-limpeza
A-Alimentação
H-Higiene
Calcule e imprima:
• o total vendido naquele dia, com todos os códigos juntos;
• o total vendido naquele dia em cada um dos códigos.
Obs.: Para encerrar a entrada de dados, digite o valor da mercadoria zero. */


#include <stdio.h>

int main() {
    float valor, total_geral = 0, total_limpeza = 0, total_alimentacao = 0, total_higiene = 0;
    char codigo;

    while (1) {
        printf("Digite o valor da mercadoria (0 para encerrar): ");
        scanf("%f", &valor);

        if (valor == 0) {
            break;
        }

        printf("Digite o código da mercadoria (L-limpeza, A-alimentação, H-higiene): ");
        scanf(" %c", &codigo); // O espaço antes de %c ignora espaços em branco

        total_geral += valor;

        switch (codigo) {
            case 'L':
                total_limpeza += valor;
                break;
            case 'A':
                total_alimentacao += valor;
                break;
            case 'H':
                total_higiene += valor;
                break;
            default:
                printf("Código inválido.\n");
        }
    }

    printf("\nTotal geral das vendas: R$ %.2f\n", total_geral);
    printf("Total vendido em produtos de limpeza: R$ %.2f\n", total_limpeza);
    printf("Total vendido em produtos de alimentação: R$ %.2f\n", total_alimentacao);
    printf("Total vendido em produtos de higiene: R$ %.2f\n", total_higiene);

    return 0;
}