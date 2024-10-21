/* 8. Faça um programa que permita entrar com o nome e o salário bruto de 10 pessoas.
Após ler os dados, imprimir o nome e o valor da alíquota do imposto de renda
calculado conforme a tabela a seguir: */

#include <stdio.h>

int main(){
    char nome[10][50];
    float salario[10], imposto;
    int i = 0;

    while(i < 10){
        printf("Qual e o seu nome: ");
        scanf("%s", nome[i]);

        printf("Qual e o seu salario bruto: ");
        scanf("%f", &salario[i]);
        

        i++;
        
        }
    for (i = 0; i < 10; i++)
        if (salario[i] < 1300 ){
            printf("\n%s e isento de imposto\n", nome[i]);
            } 
        else if (salario[i] >= 1300 && salario[i] < 2300){
            imposto = (10 * salario[i]) / 100; 
            printf("\n%s tera que pagar R$%.1f reais de imposto\n", nome[i], imposto);
        }
        else{
            imposto = (15 * salario[i]) / 100;
            printf("\n%s tera que pagar R$%.1f reais de imposto\n", nome[i], imposto);
        }

    

    return 0;
}
