/* 13. A gerente do cabeleireiro Sempre Bela tem uma tabela em que registra as quantidades de serviços
executados nos "pes", nas "mãos"e o serviço de podologia das cinco manicures. Sabendo-se que cada uma
ganha 50% do que faturou ao mês, criar um programa que possa calcular e imprimir quanto cada uma vai
receber, uma vez que não têm carteiras assinadas, os valores, respectivamente, são: R$10,00, R$15,00 e
R$30,00. */

#include <stdio.h>

int main() {
    int pes[5], maos[5], podologia[5];
    double salario[5];
    int i;

// setando os valores 
    double valorPes = 10.0;
    double valorMaos = 15.0;
    double valorPodologia = 30.0;
    double porcentagem = 0.50;

    for (i = 0; i < 5; i++) {
        printf("Digite a quantidade de serviços nos pés para a manicure %d: ", i + 1);
        scanf("%d", &pes[i]);
        printf("Digite a quantidade de serviços nas mãos para a manicure %d: ", i + 1);
        scanf("%d", &maos[i]);
        printf("Digite a quantidade de serviços de podologia para a manicure %d: ", i + 1);
        scanf("%d", &podologia[i]);
    }


// calculando os salarios das manicures
    for (i = 0; i < 5; i++) {
        salario[i] = (pes[i] * valorPes + maos[i] * valorMaos + podologia[i] * valorPodologia) * porcentagem;
    }

// Imprimindo todos os salarios
    for (i = 0; i < 5; i++) {
        printf("A manicure %d vai receber: R$%.2f\n", i + 1, salario[i]);
    }

    return 0;
}
