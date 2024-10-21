/* 6. Construa um programa que permita armazenar o salário de 20 pessoas. Calcular e armazenar o novo
salário sabendo-se que o reajuste foi de 8%. Imprimir uma listagem numerada com o salário e o novo
salário. Declare quantos vetores forem necessários. */
#include <stdio.h>

int main() {
    float salarios[20], novos_salarios[20];
    int i;

    printf("Digite os salários de 20 pessoas:\n");
    for(i = 0; i < 20; i++) {
        scanf("%f", &salarios[i]);
        novos_salarios[i] = salarios[i] * 1.08;
    }

    printf("Listagem de salários:\n");
    for(i = 0; i < 20; i++) {
        printf("%d - Salário: R$%.2f, Novo Salário: R$%.2f\n", i + 1, salarios[i], novos_salarios[i]);
    }

    return 0;
}
