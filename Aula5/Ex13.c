/* 13. Construa um programa que realize as reservas de passagens áreas de uma companhia. O programa
deve permitir cadastrar o número de 10 voos e definir a quantidade de lugares disponíveis para cada um.
Após o cadastro, leia vários pedidos de reserva, constituídos do número da carteira de identidade do cliente
e do número do vôo desejado. Para cada cliente, verificar se há possibilidade no voo desejado. Em caso
afirmativo, imprimir o número da identidade do cliente e o número do voo, atualizando o número de lugares
disponíveis. Caso contrário, avisar ao cliente a inexistência de lugares. A leitura do número 0 (zero) para o
voo desejado indica o término da leitura de reservas.
 */

#include <stdio.h>

int main() {
    int voos[10], i, voo_desejado, lugares_disponiveis, reservas[10] = {0};
    int identidade;

    // Cadastro dos voos
    for (i = 0; i < 10; i++) {
        printf("Digite o número de lugares disponíveis para o voo %d: ", i + 1);
        scanf("%d", &voos[i]);
    }

    // Processamento das reservas
    while (1) {
        printf("Digite o número da carteira de identidade do cliente (0 para sair): ");
        scanf("%d", &identidade);

        if (identidade == 0) {
            break;
        }

        printf("Digite o número do voo desejado (1 a 10): ");
        scanf("%d", &voo_desejado);

        if (voo_desejado < 1 || voo_desejado > 10) {
            printf("Número de voo inválido. Por favor, digite um número entre 1 e 10.\n");
            continue;
        }

        if (reservas[voo_desejado - 1] < voos[voo_desejado - 1]) {
            reservas[voo_desejado - 1]++;
            printf("Reserva confirmada para o cliente %d no voo %d.\n", identidade, voo_desejado);
        } else {
            printf("Desculpe, não há mais lugares disponíveis no voo %d.\n", voo_desejado);
        }
    }

    return 0;
}
