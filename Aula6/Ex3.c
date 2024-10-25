/* 3- Crie um programa que dado uma string, coloque as letras dela em ordem crescente pelo algoritmo da
bolha. */

#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[], int n) {
    int i, j;
    char temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);
    
    if (str[n-1] == '\n') {
        str[n-1] = '\0';
        n--;
    }

    bubbleSort(str, n);

    printf("String ordenada: %s\n", str);

    return 0;
}
