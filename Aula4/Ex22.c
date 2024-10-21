/* 22. Crie um programa que ajude o DETRAN a saber o total de recursos que foram arrecadados
com a aplicação de multas de trânsito.
O algoritmo deve ler as seguintes informações para cada motorista:
• número da carteira de motorista (de 1 a 4327);
• número de multas;
• valor de cada uma das multas.
Deve ser impresso o valor da dívida para cada motorista e ao final da leitura o total de
recursos arrecadados (somatório de todas as multas). O programa deverá imprimir também o
número da carteira do motorista que obteve o maior número de multas.
Obs.: O programa encerra ao ler a carteira de motorista de valor 0. */


#include <stdio.h>

int main() {
    int carteira, num_multas, maior_multas = 0, motorista_maior_multas = 0;
    float valor_multa, total_divida, total_arrecadado = 0;

    while (1) {
        printf("Digite o número da carteira ou 0 para sair: ");
        scanf("%d", &carteira);

        if (carteira == 0) {
            break;
        }

        if (carteira < 1 || carteira > 4327) {
            printf("Número de carteira inválido.\n");
            continue;
        }

        printf("Digite o número de multas: ");
        scanf("%d", &num_multas);

        total_divida = 0;
        for (int i = 0; i < num_multas; i++) {
            printf("Digite o valor da multa %d: ", i+1);
            scanf("%f", &valor_multa);
            total_divida += valor_multa;
            total_arrecadado += valor_multa;
        }

        printf("O valor total da dívida do motorista %d é R$ %.2f\n", carteira, total_divida);

        if (num_multas > maior_multas) {
            maior_multas = num_multas;
            motorista_maior_multas = carteira;
        }
    }

    printf("\nTotal arrecadado com multas: R$ %.2f\n", total_arrecadado);
    printf("---------------------------------------------------\n")
    printf("O motorista com o maior número de multas é o de número %d, com %d multas.\n", motorista_maior_multas, maior_multas);

    return 0;
}