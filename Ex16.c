/* 16. Sabendo-se que a unidade lógica e aritmética calcula a divisão por meio de subtrações
sucessivas, criar um algoritmo que calcule e imprima o resto da divisão de
números inteiros lidos. Para isso, basta subtrair o divisor ao dividendo, sucessivamente,
até que o resultado seja menor do que o divisor. O número de subtrações realizadas corresponde
 ao quociente inteiro e o valor restante da subtração corresponde ao resto. Suponha que os números 
 lidos sejam positivos e que o dividendo seja maior do que o divisor. */


#include <stdio.h>

int main() {
    int dividendo, divisor, quociente = 0, resto;

    printf("Digite o dividendo (maior que o divisor): ");
    scanf("%d", &dividendo);
    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    while (dividendo >= divisor) {
        dividendo -= divisor;
        quociente++;
    }

    resto = dividendo;

    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

    return 0;
}