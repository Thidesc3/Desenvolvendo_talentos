/* 5. Faça um programa que verifique se um número é primo por meio de uma função. Ao final imprima o
resultado.c */

#include <stdio.h>

int primo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);
  
    if (primo(numero)) {
        printf("%d é  primo.\n", numero);
    } else {
        printf("%d não é primo.\n", numero);
    }

    return 0;
}
