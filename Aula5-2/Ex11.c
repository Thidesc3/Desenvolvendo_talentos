/* 11. Entrar com valores para uma matriz C 2 x 3. Gerar e imprimir a C t. A matriz transposta é gerada trocando linha por
coluna. Veja o exemplo a seguir: */
#include <stdio.h>

int main() {
    int C[2][3], Ct[3][2];
    int i, j;

// pegando so elemntos da C
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d) Digite os elementos da matrizC:\n", i);
            scanf("%d", &C[i][j]);
        }
    }

// convertendo a matrizC para a CT
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            Ct[j][i] = C[i][j];
        }
    }

// Imprimindo a matrizC para teste
    printf("Matriz C:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

// Imprimindo a matriz Ct
    printf("Matriz Ct:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", Ct[i][j]);
        }
        printf("\n");
    }

    return 0;
}
