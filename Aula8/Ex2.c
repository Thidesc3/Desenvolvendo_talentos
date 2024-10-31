/* 2. Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de
matrícula do aluno, seu nome e as notas de três provas. Defina também um tipo para esta estrutura. Agora,
escreva um programa que leia os dados de cinco alunos e os armazena nessa estrutura. Em seguida, exiba o
nome e as notas do aluno que possui a maior média geral dentre os cinco. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct aluno
{
    int codMatricula;
    char nome[30];
    float nota[3];
};
typedef struct aluno Aluno;

int main(){
    int i, j;
    Aluno alunos[5];
    float maiorMedia = 0; 
    int indiceMaiorMedia = 0;


    for (i = 0; i < 5; i ++){
        printf("Nome do Aluno %d: ", i + 1);
        getchar();
        fgets(alunos[i].nome, 30, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
        // para poder contar a nova linha do fgets


        printf("Qual a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].codMatricula);


        for (j = 0; j < 3; j++){
            printf("fale o valor da %d nota: ", i + 1);
            scanf("%f", &alunos[i].nota[j]);
        }
    }

// Calculando a maior media
    for (i = 0; i < 5; i++) {
        float soma = 0.0;
        for (j = 0; j < 3; j++) {
            soma += alunos[i].nota[j];
        }
        float media = soma / 3.0;
        if (media > maiorMedia) {
            maiorMedia = media;
            indiceMaiorMedia = i;
        }
    }
    printf("--------------------------------\n")
    printf("\nAluno com a maior média geral:\n");
    printf("Nome: %s\n", alunos[indiceMaiorMedia].nome);
    printf("Matricula: %d\n", alunos[indiceMaiorMedia].codMatricula);
    printf("Notas: %.2f, %.2f, %.2f\n", alunos[indiceMaiorMedia].nota[0], alunos[indiceMaiorMedia].nota[1], alunos[indiceMaiorMedia].nota[2]);
    printf("Média: %.2f\n", maiorMedia);


return 0;
}