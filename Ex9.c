/* 9. No dia da estréia do filme "Procurando Dory", uma grande emissora de TV realizou
uma pesquisa logo após o encerramento do filme. Cada espectador respondeu
a um questionário no qual constava sua idade e a sua opinião em relação ao filme:
excelente - 3; bom - 2; regular - 1. Criar um programa que receba a idade e a
opinião de 20 espectadores, calcule e imprima:
• A média das idades das pessoas que responderam excelente;
• A quantidade de pessoas que responderam regular;
• A percentagem de pessoas que responderam bom entre todos os expectadores
analisados. */

#include <stdio.h>

int main(){
    int idade[20], opiniao[20], i = 0, j=0, cont=0, soma = 0, regular = 0; 
    float media = 0, quant = 0;

    while(i < 20){
        printf("Digite a sua idade: ");
        scanf("%d", &idade[i]);

        printf("De uma nota\n  1 - Exelente \n 2 - Bom \n 3 - Regular\n ");
        scanf("%d", &opiniao[i]);
        i++;

        }
    
    for (i = 0; i < 20; i++)
        switch (opiniao[i])
        {
        case 1:
            soma += idade[i];
            j++;
            break;
        case 2:
            cont++;
        case 3:
            regular++;
        default:
            break;
        }
        
    
// calculando a media 

    if (j > 0 ){
        media = soma / j; 
        printf("\n----------------------------------\n");
        printf("\nA media de idade das pessoas que selecionaram 'Exelente' foi de: %.0f anos\n", media);
        printf("\n----------------------------------\n");
    }
    else{
        printf("\n----------------------------------\n");
        printf("Ninguem selecionou exelente!");
        printf("\n----------------------------------\n");
    }

//calculando a porcentagem

    quant = (100 * cont) / i;
    printf("\nA porcentagem de pessoas que escolheram bom foi de %.1f%%\n", quant);
    printf("\n----------------------------------\n");

// Imprimindo a quantidade de pessoas

    printf("%d pessoas responderam regular\n", regular);


    return 0;

}
