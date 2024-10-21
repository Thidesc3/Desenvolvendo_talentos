/* 7. Crie um programa que leia o preço de compra e o preço de venda de 100 mercadorias (utilize vetores). Ao
final, o programa deverá imprimir quantas mercadorias proporcionam:

• lucro < 10%
• 10% <= lucro <= 20%
• lucro > 20%
 */
#include <stdio.h>

int main() {
    float preco_compra[100], preco_venda[100];
    int i, lucro_menor_10 = 0, lucro_entre_10_20 = 0, lucro_maior_20 = 0;
    float lucro;

    printf("Digite o preço de compra e venda de 100 mercadorias:\n");
    for(i = 0; i < 100; i++) {
        printf("Mercadoria %d - Preço de compra: ", i + 1);
        scanf("%f", &preco_compra[i]);
        printf("Mercadoria %d - Preço de venda: ", i + 1);
        scanf("%f", &preco_venda[i]);

        lucro = (preco_venda[i] - preco_compra[i]) / preco_compra[i] * 100;

        if(lucro < 10) {
            lucro_menor_10++;
        } else if(lucro <= 20) {
            lucro_entre_10_20++;
        } else {
            lucro_maior_20++;
        }
    }

    printf("Mercadorias com lucro < 10%%: %d\n", lucro_menor_10);
    printf("Mercadorias com 10%% <= lucro <= 20%%: %d\n", lucro_entre_10_20);
    printf("Mercadorias com lucro > 20%%: %d\n", lucro_maior_20);

    return 0;
}

