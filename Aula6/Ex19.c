/* 19. Construa um programa que carregue uma matriz 12 X 4 com os valores das vendas de uma loja, em cada
linha represente um mês do ano, e cada coluna, uma semana do mês. Calcule e imprima:
• total vendido em cada mês do ano;
• total vendido em cada semana durante todo o ano;
• total vendido no ano. */

#include <stdio.h>

int main() {
    float vendas[12][4];
    float totalMes[12] = {0};
    float totalSemana[4] = {0};
    float totalAno = 0;
    int i, j;

// pegando os valores das vendas
    printf("Digite os valores das vendas (12 meses, 4 semanas por mês):\n");
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 4; j++) {
            printf("Mês %d, Semana %d: ", i + 1, j + 1);
            scanf("%f", &vendas[i][j]);
        }
    }

// Calculando o total vendido em cada mês, semana e no ano
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 4; j++) {
            totalMes[i] += vendas[i][j];
            totalSemana[j] += vendas[i][j];
            totalAno += vendas[i][j];
        }
    }

// Imprimindo total vendido no mes
    printf("\nTotal vendido em cada mês:\n");
    for (i = 0; i < 12; i++) {
        printf("Mês %d: R$%.2f\n", i + 1, totalMes[i]);
    }

// Imprimindo o total vendido em cada semana durante todo o ano
    printf("\nTotal vendido em cada semana durante o ano:\n");
    for (j = 0; j < 4; j++) {
        printf("Semana %d: R$%.2f\n", j + 1, totalSemana[j]);
    }

// Imprimindo o total vendido no ano
    printf("\nTotal vendido no ano: R$%.2f\n", totalAno);

    return 0;
}
