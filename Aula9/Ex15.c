/* 15. Construa um programa em C que leia um caractere (letra) e, por meio de uma função, retorne se este
caractere é uma consoante ou uma vogal. Ao final imprima o resultado. */


#include <stdio.h>
#include <ctype.h>

int vogal(char c) { 
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    char caractere;

    printf("Digite um caractere minusculo: ");
    scanf("%c", &caractere);

    if (vogal(caractere)) {
        printf("O caractere '%c' é uma vogal.\n", caractere);
    } else {
        printf("O caractere '%c' é uma consoante.\n", caractere);
    }

    return 0;
}
