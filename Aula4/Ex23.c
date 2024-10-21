/* 23. Crie um programa que leia um conjunto de informações (nome, sexo, idade, peso
e altura) dos atletas que participaram de uma olimpíada, e informar:
• a atleta do sexo feminino mais alta;
• o atleta do sexomasculinomais pesado;
• a média de idade dos atletas.
Obs.: Deverão se lidos dados dos atletas até que seja digitado o nome @ para um
atleta. */
#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char sexo;
    float peso, altura, alturaMaisAltaFeminino = 0, pesoMaisPesadoMasculino = 0;
    char atletaMaisAltaFeminino[50] = "", atletaMaisPesadoMasculino[50] = "";
    int totalIdade = 0, contador = 0, idade;

    while (1) {
        printf("Digite o nome do atleta ou sair: ");
        scanf("%s", nome);
        if (strcmp(nome, "sair") == 0 ||strcmp(nome, "Sair") == 0) break;

        printf("Digite o sexo do atleta (M para masculino, F para feminino): ");
        scanf(" %c", &sexo);
        printf("Digite a idade do atleta: ");
        scanf("%d", &idade);
        printf("Digite o peso do atleta: ");
        scanf("%f", &peso);
        printf("Digite a altura do atleta: ");
        scanf("%f", &altura);

        totalIdade += idade;
        contador++;

        if (sexo == 'F' && altura > alturaMaisAltaFeminino) {
            alturaMaisAltaFeminino = altura;
            for (int i = 0; i < 50; i++) {
                atletaMaisAltaFeminino[i] = nome[i];
                if (nome[i] == '\0') break; 
            }
        }

        if (sexo == 'M' && peso > pesoMaisPesadoMasculino) {
            pesoMaisPesadoMasculino = peso;
            for (int i = 0; i < 50; i++) {
                atletaMaisPesadoMasculino[i] = nome[i];
                if (nome[i] == '\0') break; 
            }
        }
    }

    if (contador > 0) {
        printf("\nAtleta feminina mais alta: %s com %.2f m\n", atletaMaisAltaFeminino, alturaMaisAltaFeminino);
        printf("Atleta masculino mais pesado: %s com %.2f kg\n", atletaMaisPesadoMasculino, pesoMaisPesadoMasculino);
        printf("Média de idade dos atletas: %.2f anos\n", (float)totalIdade / contador);
    } else {
        printf("Nenhum atleta foi cadastrado.\n");
    }

    return 0;
}


