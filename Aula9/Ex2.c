/* 2. Faça um programa que receba as notas de três provas e calcule a média. Para o cálculo, escreva uma
função. O programa deve imprimir a média ao final. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double resultadoMedia(double nota1, double nota2, double nota3){
    double media = (nota1 + nota2 + nota3) / 3;
    return media;
}


int main(){
    float nota[3], mediaFinal;
    int i;

    for(i = 0; i < 3; i++){
        printf("Digite a nota(%d): ", i);
        scanf("%f", &nota[i]);
    }
    mediaFinal = resultadoMedia(nota[0], nota[1], nota[2]);

    printf("%.2f", mediaFinal);


// outra maneira de resulver o problema
 /*    printf("Digite a sua primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a sua segunda nota: ");
    scanf("%lf", &nota2);

    printf("Digite a sua terceira nota: ");
    scanf("%lf", &nota3);

    mediaFinal = resultadoMedia(nota1, nota2, nota3);
    printf("%.2lf", mediaFinal); */


return 0;
}