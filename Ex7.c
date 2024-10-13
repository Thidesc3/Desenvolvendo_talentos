/* 7) Crie um programa em linguagem C que permita entrar com o nome, a nota da
prova 1 e da prova 2 de 15 alunos. Ao final, imprimir uma listagem, contendo:
nome, nota da prova 1, nota da prova 2, e média das notas de cada aluno. Ao final,
imprimir a média geral da turma. */

#include <stdio.h>

int main(){
    float nota1[15], nota2[15];
    float media[15], mediaGeral = 0; 
    int i;
    char nomes[15][50];

    for (i = 0; i < 15; i++) {
        printf("Digite um nome: ");
        scanf("%s", nomes[i]);
        
        printf("Digite a nota 1: ");
        scanf("%f", &nota1[i]);

        printf("Digite a nota 2: ");
        scanf("%f", &nota2[i]);
        printf("--------------------\n");
    }
    printf("---------------------------------\n");
    printf("\t  NOTAS\n");
    for(i = 0; i < 15; i++){
        printf("---------------------------------\n");
        printf("Nome do aluno: %s\n", nomes[i]);
        printf("Nota 1 = %.1f\n", nota1[i]);
        printf("Nota 2 = %.1f\n", nota2[i]);
        media[i] = (nota1[i] + nota2[i]) / 2;
        printf("Media final do aluno = %.1f\n", media[i]);
    }
    for (i = 0; i < 15; i++){
        mediaGeral += media[i];
        }
    
    mediaGeral /= 15;

    printf("---------------------------------\n");
    printf("\n\tMEDIA GERAL DA TURMA\n");
    printf("---------------------------------\n");
    printf("A media geral da turma = %.1f", mediaGeral);
    return 0;
}
