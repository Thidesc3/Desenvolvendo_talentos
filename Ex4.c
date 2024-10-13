//4) Faça um programa em C que permita entrar com o nome, a idade e o sexo de 20 pessoas.O programa deve imprimir o nome da pessoa se ela for do sexo masculino e tiver mais de 21 anos.

#include <stdio.h>

int main(){
    int idade, i = 1;
    char sexo, nome[150];


    while (i <= 20){
        printf("%d) Escreva seu primeiro nome: ", i);
        scanf("%s", nome);

        printf("Sexo (M - F): ");
        scanf(" %c", &sexo);

        printf("Idade: ");
        scanf("%d", &idade);
        i++;

        if ((sexo == 'M' || sexo == 'm') && idade > 21) {
            printf("-----------\n");
            printf("Nome: %s\n", nome);
            printf("-----------\n");

        }
    }
    return 0;
}