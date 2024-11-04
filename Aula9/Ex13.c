/* 13. Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas oferecendo
desconto. Faça um programa que permita entrar com o valor de um produto e o percentual de desconto e
imprimir o novo valor com base no percentual informado. Para fazer o cálculo, implemente uma função. */


#include <stdio.h>

double desconto(double valor, double percentual) {
    return valor - (valor * percentual / 100);
}

int main() {
    double valorProduto, percentualDesconto, novoValor;

    printf("Digite o valor do produto: ");
    scanf("%lf", &valorProduto);

    printf("Digite o percentual de desconto: ");
    scanf("%lf", &percentualDesconto);
    novoValor = desconto(valorProduto, percentualDesconto);

    printf("O valor do produto com %.0lf%% de desconto é: %.2lf\n",percentualDesconto, novoValor);

    return 0;
}
