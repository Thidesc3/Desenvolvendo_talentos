/* 8. Construa um programa que armazene o código, a quantidade, o valor de compra e o valor de venda de 30
produtos. A listagem pode ser de todos os produtos ou somente de uma o se digitar o código.
 */
#include <stdio.h>

typedef struct {
    int codigo;
    int quantidade;
    float valor_compra;
    float valor_venda;
} Produto;

int main() {
    Produto produtos[30];
    int i, codigo;

    // Entrada dos dados
    for(i = 0; i < 30; i++) {
        printf("Produto %d - Código: ", i + 1);
        scanf("%d", &produtos[i].codigo);
        printf("Produto %d - Quantidade: ", i + 1);
        scanf("%d", &produtos[i].quantidade);
        printf("Produto %d - Valor de compra: ", i + 1);
        scanf("%f", &produtos[i].valor_compra);
        printf("Produto %d - Valor de venda: ", i + 1);
        scanf("%f", &produtos[i].valor_venda);
    }

    // Listagem de todos os produtos
    printf("Listagem de produtos:\n");
    for(i = 0; i < 30; i++) {
        printf("Produto %d - Código: %d, Quantidade: %d, Valor de compra: R$%.2f, Valor de venda: R$%.2f\n", i + 1, produtos[i].codigo, produtos[i].quantidade, produtos[i].valor_compra, produtos[i].valor_venda);
    }

    // Busca por código
    printf("Digite o código do produto para listar (0 para sair): ");
    while(1) {
        scanf("%d", &codigo);
        if(codigo == 0) break;

        for(i = 0; i < 30; i++) {
            if(produtos[i].codigo == codigo) {
                printf("Produto %d - Código: %d, Quantidade: %d, Valor de compra: R$%.2f, Valor de venda: R$%.2f\n", i + 1, produtos[i].codigo, produtos[i].quantidade, produtos[i].valor_compra, produtos[i].valor_venda);
                break;
            }
        }
        if(i == 30) printf("Código não encontrado!\n");
    }

