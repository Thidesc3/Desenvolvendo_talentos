/* 1. Faça um programa em C que armazene 15 números inteiros em um vetor e depois permita que o usuário
digite um número inteiro para ser buscado no vetor, se for encontrado o programa deve imprimir a posição
desse número no vetor, caso contrário, deve imprimir a mensagem: "Não encontrado!".
 */
#include <stdio.h>

int main() {
    int vetor[15], numero, i, encontrado = 0;

    printf("Digite 15 números inteiros:\n");
    for(i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um número para buscar no vetor: ");
    scanf("%d", &numero);

    for(i = 0; i < 15; i++) {
        if(vetor[i] == numero) {
            printf("Número encontrado na posição %d\n", i);
            encontrado = 1;
            break;
        }
    }

    if(!encontrado) {
        printf("Não encontrado!\n");
    }

    return 0;
}
