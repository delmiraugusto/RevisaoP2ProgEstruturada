/*Escreva uma função que receba um Aluno e retorne sua média.
Aluno com os campos: nome (string), matrícula (int), três notas (float)*/

#include <stdio.h>

typedef struct {
    char nome[20];
    int matricula;
    double notas[3];
} aluno;

double mean(aluno *a) {
    int i;
    double media = 0;

    scanf(" %[^\n]", (*a).nome);
    scanf("%d", &(*a).matricula);

    for(i=0; i<3; i++){
        scanf("%lf", &(*a).notas[i]);
        media = media + (*a).notas[i];
    }
    media = media/3;

    return media;
}

int main() {
    aluno a;
    double media;

    media = mean(&a);

    printf("Media do aluno %s: %.2lf\n", a.nome, media);

    return 0;
}