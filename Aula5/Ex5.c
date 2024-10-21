/* 5. Faça um programa que armazene as notas das provas 1 e 2 de 15 alunos. Calcule e armazene a média
arredondada. Armazene também a situação do aluno:
1-Aprovado ou 2-Reprovado.
Ao final o programa deve imprimir uma listagem contendo as notas, a média e a situação de cada aluno em
formato tabulado. */

#include <stdio.h>

int main() {
    float notas1[15], notas2[15], medias[15];
    int i;
    char situacao[15][10];

    printf("Digite as notas das provas 1 e 2 de 15 alunos:\n");
    for(i = 0; i < 15; i++) {
        printf("Aluno %d - Prova 1: ", i + 1);
        scanf("%f", &notas1[i]);
        printf("Aluno %d - Prova 2: ", i + 1);
        scanf("%f", &notas2[i]);
        
        medias[i] = (notas1[i] + notas2[i]) / 2.0;
        if(medias[i] >= 6.0) {
            sprintf(situacao[i], "Aprovado");
        } else {
            sprintf(situacao[i], "Reprovado");
        }
    }

    printf("Listagem de alunos:\n");
    printf("Aluno\tProva 1\tProva 2\tMédia\tSituação\n");
    for(i = 0; i < 15; i++) {
        printf("%d\t%.2f\t%.2f\t%.2f\t%s\n", i + 1, notas1[i], notas2[i], medias[i], situacao[i]);
    }

    return 0;
}
