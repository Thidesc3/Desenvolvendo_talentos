/* 24. Faça um programa que calcule quantos litros de gasolina são usados em uma viagem, sabendo
que um carro faz 10 km/litro. O usuário fornecerá a velocidade do carro e o período de tempo que viaja
nesta velocidade para cada trecho do percurso. Então, usando as fórmulas distância = tempo x
velocidade e litros consumidos = distância / 10, o programa computará, para todos os valores não
negativos de velocidade, os litros de combustível consumidos. O programa deverá imprimir a distância
e o número de litros de combustível gastos naquele trecho. Deverá imprimir também o total de litros
gastos na viagem. O programa encerra quando o usuário informar um valor negativo de velocidade. */

#include <stdio.h>

int main() {
    float velocidade, tempo, distancia, litros, consumo_total = 0;

    while (1) {
        printf("Digite a velocidade em km/h ou 0 para encerrar: ");
        scanf("%f", &velocidade);

        if (velocidade < 0) {
            break;
        }

        printf("Digite o tempo de viagem (horas): ");
        scanf("%f", &tempo);

        distancia = velocidade * tempo;
        litros = distancia / 10;

        printf("Distância percorrida: %.2f km\n", distancia);
        printf("Litros consumidos: %.2f L\n\n", litros);

        consumo_total += litros;
    }

    printf("Consumo total de combustível na viagem: %.2f L\n", consumo_total);

    return 0;
}