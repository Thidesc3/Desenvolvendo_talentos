/* 14. Faça um programa que verifique quantas vezes um número é divisível por outro. A função deve receber dois
parâmetros, o dividendo e o divisor. Ao ler o divisor, é importante verificar se ele é menor que o dividendo. Ao
final imprima o resultado. */

#include <stdio.h>

int divisivelPor(int dividendo, int divisor) {
    int count = 0;
    while (dividendo % divisor == 0) {
        dividendo /= divisor;
        count++;
    }
    return count;
}

int main() {
    int dividendo, divisor;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);
    printf("Digite o divisor menor que o dividendo: ");
    scanf("%d", &divisor);

    while (divisor >= dividendo) {
        printf("O divisor deve ser menor que o dividendo.\n");
        printf("Digite o divisor menor que o dividento: ");
        scanf("%d", &divisor);
    }

    int resultado = divisivelPor(dividendo, divisor);
    printf("O número %d é divisível por %d, %d vezes.\n", dividendo, divisor, resultado);

    return 0;
}
