/* 17. A Viação José Maria Rodrigues tem na Rodoviária de Rio Novo uma tabela contendo os horários de
partidas dos ônibus para Juiz de Fora nos sete dias da semana. Faça um programa que possa armazenar
esses horários e os horários do dia quando forem solicitados pelo funcionário, sabendo-se que, no máximo, são
dez horários. Ao final, o programa deve imprimir a lista de horários para todos os dias. */

#include <stdio.h>

int main() {
    int i, j;
    int horarios[7][10];
    int numHorarios[7]; 

// pegando os horários de partida para cada dia da semana
    for (i = 0; i < 7; i++) {
        printf("Digite o número de horários de partida para o dia %d (máximo 10): ", i + 1);
        scanf("%d", &numHorarios[i]);

        for (j = 0; j < numHorarios[i]; j++) {
            printf("Digite o horário %d para o dia %d: ", j + 1, i + 1);
            scanf("%d", &horarios[i][j]);
        }
    }

// imprimindo a lista de horários para todos os dias
    printf("\nLista de horários de partidas dos ônibus para Juiz de Fora:\n");
    for (i = 0; i < 7; i++) {
        printf("Dia %d:\n", i + 1);
        for (j = 0; j < numHorarios[i]; j++) {
            printf("%d ", horarios[i][j]);
        }
        printf("\n");
    }

    return 0;
}
