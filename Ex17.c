/* 17. Crie um programa em C que possa ler um conjunto de pedidos de compra e
calcule o valor total da compra. Cada pedido é composto pelos seguintes campos:
• número de pedido
• data do pedido (dia, mês, ano)
• preço unitário
• quantidade
O programa deverá processar novos pedidos até que o usuário digite 0 (zero) como número do
pedido. */
#include <stdio.h>

int main() {
    int numero, dia, mes, ano, quantidade;
    float preco_unitario, valor_total = 0.0;
    char continuar;

    do {
        printf("Digite o número do pedido (0 para sair): ");
        scanf("%d", &numero);

        if (numero > 0) {
            printf("Digite o dia: ");
            scanf("%d", &dia);
            printf("Digite o mes: ");
            scanf("%d", &mes);
            printf("Digite o ano: ");
            scanf("%d", &ano);

            printf("Digite o preço unitario: ");
            scanf("%f", &preco_unitario);

            if (preco_unitario <= 0) {
                printf("Preço unitário inválido.\n");
                continue; 
            }

            printf("Digite a quantidade: ");
            scanf("%d", &quantidade);

            if (quantidade <= 0) {
                printf("Quantidade inválida.\n");
                continue; 
            }

            valor_total += preco_unitario * quantidade;

            printf("Pedido %d adicionado com sucesso.\n\n", numero);
        }

        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continuar); 
    } while (continuar == 's' || continuar == 'S');

    printf("Valor total da compra: R$%.2f\n", valor_total);

    return 0;
}
