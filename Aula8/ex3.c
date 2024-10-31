/* 3. Cria uma estrutura chamada retângulo. Essa estrutura deverá conter o ponto superior esquerdo e o ponto
inferior direito do retângulo, a qual contém as posições X e Y de cada ponto. Faça um programa que declare e
leia uma estrutura retângulo e exiba a área e o comprimento da diagonal e o perímetro desse retângulo. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct Ponto {
    int x;
    int y;
};

struct Retangulo {
    struct Ponto esquedSup; 
    struct Ponto direitInf;
};

typedef struct Ponto Ponto;
typedef struct Retangulo Retangulo;

int calcularArea(Retangulo r) {
    int largura = r.direitInf.x - r.esquedSup.x;
    int altura = r.esquedSup.y - r.direitInf.y;
    return largura * altura;
}

float calcularDiagonal(Retangulo r) {
    int largura = r.direitInf.x - r.esquedSup.x;
    int altura = r.esquedSup.y - r.direitInf.y;
    return sqrt(largura * largura + altura * altura);
}

int calcularPerimetro(Retangulo r) {
    int largura = r.direitInf.x - r.esquedSup.x;
    int altura = r.esquedSup.y - r.direitInf.y;
    return 2 * (largura + altura);
}

int main() {
    Retangulo r;
    printf("Coloque as coordenadad do ponto superior esquerdo: ");
    scanf("%d %d", &r.esquedSup.x, &r.esquedSup.y);

    printf("Digite as coordenadas do ponto inferior direito: ");
    scanf("%d %d", &r.direitInf.x, &r.direitInf.y);
   
    int area = calcularArea(r);
    float diagonal = calcularDiagonal(r);
    int perimetro = calcularPerimetro(r);


// printando os resultados
    printf("area: %d\n", area);
    printf("Comprimento da diagonal: %.2f\n", diagonal);
    printf("Perimetro: %d\n", perimetro);

    return 0;
}
