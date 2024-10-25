/* 4 – Faça um programa que leia n nomes e ordene-os pelo tamanho utilizando o algoritmo da seleção. No
final, o algoritmo deve mostrar todos os nomes ordenados. */
#include <stdio.h>
#include <string.h>

void selectionSort(char nomes[][100], int n) {
    int i, j, min_idx;
    char temp[100];

    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (strlen(nomes[j]) < strlen(nomes[min_idx])) {
                min_idx = j;
            }
        }
        strcpy(temp, nomes[min_idx]);
        strcpy(nomes[min_idx], nomes[i]);
        strcpy(nomes[i], temp);
    }
}

int main() {
    int n, i;

    printf("Digite a quantidade de nomes: ");
    scanf("%d", &n);
    getchar(); 

    char nomes[n][100];


    for (i = 0; i < n; i++) {
        printf("Digite o nome %d: ", i + 1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        // Remover o newline do final da string
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    selectionSort(nomes, n);

    printf("Nomes ordenados pelo tamanho:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}
