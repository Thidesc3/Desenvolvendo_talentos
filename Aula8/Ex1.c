/* 1. Implemente um programa em C que leia o nome, a idade e o endereço de uma pessoa e armazene esses
dados em uma estrutura. Em seguida, imprima na tela os dados da estrutura lida. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct pessoa
{
    char nome[30];
    int idade;
    char endereco[50];
};
typedef struct pessoa Pessoa;

int main(){
    Pessoa p1;

// pegando o nome idade e endereco
    printf("Qual os eu nome?: ");
    scanf("%s", p1.nome);

    printf("\nQual a sua idade?: ");
    scanf("%d", &p1.idade);
    getchar(); // tendo que usar getchar() para "quebrar" a liha do scanf se n o fgets nao funciona

    printf("\nQual o seu endereco?: ");
    fgets(p1.endereco, 50, stdin);

    printf("O seu nome e %s, voce tem %d anos e mora %s", p1.nome, p1.idade, p1.endereco);
    return 0;
}