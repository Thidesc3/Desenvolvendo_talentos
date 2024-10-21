/* 21. Em uma universidade cada aluno possui os seguintes dados:
• Renda pessoal;
• Renda familiar;
• Total gasto com alimentação;
• Total gasto com outras despesas;
Faça um programa que imprima a porcentagem dos alunos que gasta acima de
R$200,00 com outras despesas. O número de alunos com renda pessoal maior que a
renda familiar e a porcentagem gasta com alimentação e outras despesas em relação às
rendas pessoal e familiar. Obs.: O programa encerra quando se digita 0 para a renda
pessoal. */

#include <stdio.h>

int main() {
    int num_alunos_gasto_acima_200 = 0, num_alunos_renda_maior = 0, total_alunos = 0;
    float renda_pessoal, renda_familiar, gasto_alimentacao, gasto_outras, porcentagem_alimentacao, porcentagem_outras;

    while (1) {
        printf("Digite a renda pessoal ou 0 para sair: ");
        scanf("%f", &renda_pessoal);

        if (renda_pessoal == 0) {
            break;
        }

        printf("Digite a renda familiar: ");
        scanf("%f", &renda_familiar);

        printf("Digite o total gasto com alimentação: ");
        scanf("%f", &gasto_alimentacao);

        printf("Digite o total gasto com outras despesas: ");
        scanf("%f", &gasto_outras);

        total_alunos++;

        if (gasto_outras > 200) {
            num_alunos_gasto_acima_200++;
        }

        if (renda_pessoal > renda_familiar) {
            num_alunos_renda_maior++;
        }

        porcentagem_alimentacao = (gasto_alimentacao / (renda_pessoal + renda_familiar)) * 100;
        porcentagem_outras = (gasto_outras / (renda_pessoal + renda_familiar)) * 100;

        printf("Porcentagem gasta com alimentação: %.2f%%\n", porcentagem_alimentacao);
        printf("Porcentagem gasta com outras despesas: %.2f%%\n\n", porcentagem_outras);
    }

    printf("Número de alunos que gastam mais de R$200,00 com outras despesas: %d\n", num_alunos_gasto_acima_200);
    printf("Número de alunos com renda pessoal maior que a renda familiar: %d\n", num_alunos_renda_maior);
    printf("Porcentagem total de alunos que gastam mais de R$200,00 com outras despesas: %.2f%%\n", (float)num_alunos_gasto_acima_200 / total_alunos * 100);

    return 0;
}