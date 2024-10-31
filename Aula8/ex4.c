/* 4. Usando a estrutura retângulo do exercício anterior, faça um programa que declare e leia uma estrutura
retângulo e um ponto, e informe se esse ponto está ou não dentro do retângulo. */

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

int pontoDentroRetangulo(Retangulo r, Ponto p) {
    return (p.x >= r.esquedSup.x && p.x <= r.direitInf.x && p.y <= r.esquedSup.y && p.y >= r.direitInf.y);
}

int main() {
    Retangulo r;
    Ponto p;

    printf("Coloque as coordenadad do ponto superior esquerdo: ");
    scanf("%d %d", &r.esquedSup.x, &r.esquedSup.y);

    printf("Digite as coordenadas do ponto inferior direito: ");
    scanf("%d %d", &r.direitInf.x, &r.direitInf.y);

// veridicando o ponto
    printf("Digite as coordenadas do ponto X , Y: ");
    scanf("%d %d", &p.x, &p.y);

// Vendo se o ponto esta dentro
    if (pontoDentroRetangulo(r, p)) {
        printf("O ponto (%d, %d) está dentro do retângulo.\n", p.x, p.y);
    } else {
        printf("O ponto (%d, %d) não está dentro do retângulo.\n", p.x, p.y);
    }

    return 0;
}
