/* 15. A matriz dados contémna 1a coluna a matrícula do aluno; na 2a, o sexo (0 para feminino e 1 para
masculino); na 3a, o código do curso, e na 4a, o CR (coeficiente de rendimento). Faça um programa que
armazene esses dados sabendo-se que o código do curso é uma parte da matrícula: aascccnnn (aa ano, s
semestre, ccc código do curso e nnn matrícula no curso). Além disso, um grupo empresarial resolveu premiar
a aluna com CR mais alto de um curso cujo código deverá ser digitado. Suponha 10 alunos e que o CR é um
no inteiro. */

#include <stdio.h>

int main() {
    int dados[10][4];
    int i, curso_procurado, matricula, sexo, codigo, cr;
    int maior_cr = -1;
    int premiada = -1;

// Leitura dos dados dos alunos
    for (i = 0; i < 10; i++) {
        printf("Digite a matrícula, sexo (0 para feminino, 1 para masculino), código do curso e CR do aluno %d: ", i + 1);
        scanf("%d %d %d %d", &matricula, &sexo, &codigo, &cr);
        
        dados[i][0] = matricula;
        dados[i][1] = sexo;
        dados[i][2] = codigo;
        dados[i][3] = cr;
    }

// pedindo o código do curso para verifica
    printf("Digite o código do curso para verificar a aluna com maior CR: ");
    scanf("%d", &curso_procurado);

// Procurando a aluna com maior CR no curso escolhido
    for (i = 0; i < 10; i++) {
        if (dados[i][2] == curso_procurado && dados[i][1] == 0) {
            if (dados[i][3] > maior_cr) {
                maior_cr = dados[i][3];
                premiada = i;
            }
        }
    }

// mostrnado o resultado
    if (premiada != -1) {
        printf("A aluna com maior CR no curso %d é a de matrícula %d, com CR %d.\n", curso_procurado, dados[premiada][0], dados[premiada][3]);
    } else {
        printf("Não há alunas inscritas neste curso ou o curso não existe.\n");
    }

    return 0;
}
