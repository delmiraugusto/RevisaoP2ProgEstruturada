/*Escreva uma subrotina que receba um vetor de Aluno e imprima o nome do aluno com a maior média.
Aluno com os campos: nome (string), matrícula (int), três notas (float).*/

#include <stdio.h>

typedef struct {
    char nome[20];
    int matricula;
    double notas[3], media;
} aluno;

void maiorMedia(aluno alunos[], int n) {
    int i, j, x;
    double maiorMedia = 0;

    for(i=0; i<n; i++){
        alunos[i].media = 0;
    }

    for(i=0; i<n; i++){
        scanf(" %[^\n]", alunos[i].nome);
        scanf("%d", &alunos[i].matricula);

        for(j=0; j<3; j++){
            scanf("%lf", &alunos[i].notas[j]);
            alunos[i].media = alunos[i].media + alunos[i].notas[j];
        }

        alunos[i].media = (alunos[i].media)/3;

        if(alunos[i].media > maiorMedia){
            x = i;
            maiorMedia = alunos[i].media;
        }
    }
    printf("O aluno com a maior media foi: %s\n", alunos[x].nome);
    
}

int main() {
    aluno alunos[2];

    maiorMedia(alunos, 2);

    return 0;
}