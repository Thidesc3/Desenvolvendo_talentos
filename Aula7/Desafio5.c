/* Crie um programa que leia uma sequência de caracteres (máximo 100 caracteres) e identifique o maior e o menor caractere (com base no valor ASCII). Ordene a sequência em ordem crescente usando Insertion Sort e exiba a sequência ordenada. */

#include <stdio.h>
#include <string.h>

void insertionSort(char arr[], int n) {
    int i, j;
    char key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    char str[101];
    int n;

    printf("Digite ate 100 caracteres
    : ");
    fgets(str, sizeof(str), stdin);

    n = strlen(str);
    if (str[n - 1] == '\n') {
        str[n - 1] = '\0';
        n--;
    }
    char menor = str[0];
    char maior = str[0];
    for (int i = 1; i < n; i++) {
        if (str[i] < menor) {
            menor = str[i];
        }
        if (str[i] > maior) {
            maior = str[i];
        }
    }

    insertionSort(str, n);

// printando os resultados
    printf("Maior caractere: %c\n", maior);
    printf("Menor caractere: %c\n", menor);
    printf("Sequência ordenada: %s\n", str);

    return 0;
}
