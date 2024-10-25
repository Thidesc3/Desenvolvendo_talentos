/* 2- Faça uma comparação entre todos os métodos de ordenação implementados com relação a ordem de
complexidade (levando em consideração a qntd de comparações e movimentações). Teste diferentes
configurações de entrada (comparações com entradas de 10, 50 e 100 valores, dispostos de modo aleatório
e ordenados de modo decrescente). */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int arr[], int n, int *comp, int *mov) {
    int i, j, min_idx, temp;
    *comp = 0;
    *mov = 0;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            (*comp)++;
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
        (*mov)++;
    }
}

void bubbleSort(int arr[], int n, int *comp, int *mov) {
    int i, j, temp;
    *comp = 0;
    *mov = 0;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            (*comp)++;
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                (*mov)++;
            }
        }
    }
}

void insertionSort(int arr[], int n, int *comp, int *mov) {
    int i, key, j;
    *comp = 0;
    *mov = 0;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            (*comp)++;
            arr[j + 1] = arr[j];
            j = j - 1;
            (*mov)++;
        }
        arr[j + 1] = key;
        (*mov)++;
    }
}

void testSorting(void (*sortFunc)(int[], int, int*, int*), int arr[], int n) {
    int comp, mov;
    sortFunc(arr, n, &comp, &mov);
    printf("Comparações: %d, Movimentações: %d\n", comp, mov);
}

void generateRandomArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
}

void generateDescendingArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = n - i;
    }
}

void copyArray(int source[], int dest[], int n) {
    for (int i = 0; i < n; i++) {
        dest[i] = source[i];
    }
}

int main() {
    srand(time(0));
    
    int sizes[] = {10, 50, 100};
    for (int s = 0; s < 3; s++) {
        int n = sizes[s];
        int arr[n], arrCopy[n];

        printf("\nComparação com entrada aleatória de %d valores:\n", n);
        generateRandomArray(arr, n);
        copyArray(arr, arrCopy, n);
        printf("Selection Sort: ");
        testSorting(selectionSort, arrCopy, n);
        
        copyArray(arr, arrCopy, n);
        printf("Bubble Sort: ");
        testSorting(bubbleSort, arrCopy, n);
        
        copyArray(arr, arrCopy, n);
        printf("Insertion Sort: ");
        testSorting(insertionSort, arrCopy, n);

        printf("\nComparação com entrada decrescente de %d valores:\n", n);
        generateDescendingArray(arr, n);
        copyArray(arr, arrCopy, n);
        printf("Selection Sort: ");
        testSorting(selectionSort, arrCopy, n);
        
        copyArray(arr, arrCopy, n);
        printf("Bubble Sort: ");
        testSorting(bubbleSort, arrCopy, n);
        
        copyArray(arr, arrCopy, n);
        printf("Insertion Sort: ");
        testSorting(insertionSort, arrCopy, n);
    }

    return 0;
}
