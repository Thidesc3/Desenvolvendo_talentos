/* 20. Uma pesquisa de opinião realizada no Rio de Janeiro, teve as seguintes perguntas:
• Qual o seu time de coração?
1-Fluminense;
2-Botafogo;
3-Vasco;
4-Flamengo;
5-Outros
• Onde você mora?
1-RJ;
2-Niterói;
3-Outros
• Qual o seu salário?
Faça um programa que imprima: o número de torcedores por clube; a média salarial dos torcedores do
Botafogo; o número de pessoas moradoras do Rio de Janeiro, torcedores de outros clubes; o número
de pessoas de Niterói torcedoras do Fluminense
 */


#include <stdio.h>

int main() {
    int time, cidade, num_torcedores[5] = {0}, num_botafogo = 0, soma_salario_botafogo = 0, num_rio_outros = 0, num_niteroi_flu = 0, salario;
    float media_salario_botafogo;
    char continuar;

    do {
        printf("Qual o seu time de coração? (1-Flu, 2-Bot, 3-Vas, 4-Fla, 5-Outros): ");
        scanf("%d", &time);

        if (time < 1 || time > 5) {
            printf("Opção inválida. Tente novamente.\n");
            continue;
        }

        num_torcedores[time-1]++;

        printf("Onde você mora? (1-RJ, 2-Niterói, 3-Outros): ");
        scanf("%d", &cidade);

        if (cidade < 1 || cidade > 3) {
            printf("Opção inválida. Tente novamente.\n");
            continue;
        }

        printf("Qual o seu salário? ");
        scanf("%d", &salario);

        if (time == 2) {
            num_botafogo++;
            soma_salario_botafogo += salario;
        }

        if (cidade == 1 && time != 1 && time != 2 && time != 3 && time != 4) {
            num_rio_outros++;
        }

        if (cidade == 2 && time == 1) { 
            num_niteroi_flu++;
        }

        printf("Deseja continuar? s ou n: ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    if (num_botafogo > 0) {
        media_salario_botafogo = (float)soma_salario_botafogo / num_botafogo;
    } else {
        printf("Não há torcedores do Botafogo para calcular a média salarial.\n");
    }

    printf("\nResultados da pesquisa:\n");
    printf("Número de torcedores por clube:\n");
    printf("Fluminense: %d\n", num_torcedores[0]);
    printf("Botafogo: %d\n", num_torcedores[1]);
    printf("Vasco: %d\n", num_torcedores[2]);
    printf("Flamengo: %d\n", num_torcedores[3]);
    printf("Outros: %d\n", num_torcedores[4]);

    printf("Média salarial dos torcedores do Botafogo: R$%.2f\n", media_salario_botafogo);
    printf("Número de pessoas moradoras do Rio de Janeiro, torcedores de outros clubes: %d\n", num_rio_outros);
    printf("Número de pessoas de Niterói torcedoras do Fluminense: %d\n", num_niteroi_flu);

    return 0;
}