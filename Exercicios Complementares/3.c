/* 3. Análise de Alunos
Elabore um programa que cadastre os dados de três alunos, contendo nome e nota, 
armazenando-os em um vetor de structs. O programa deve calcular a média das notas e 
identificar o aluno com a maior nota. Utilize funções e passagem por referência onde for necessário. */

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    double nota;
} Alunos;

void cadastro(Alunos a[], double *media, char nomeMaiorNota[]){
    int i;
    double somaNotas = 0.0, maiorNota = -10;

    for (i = 0; i < 3; i++){
        scanf(" %[^\n]", a[i].nome);
        scanf("%lf", &a[i].nota);

        somaNotas += a[i].nota;
        if(a[i].nota > maiorNota){
            maiorNota = a[i].nota;
            strcpy(nomeMaiorNota, a[i].nome);
        }
    }

    (*media) = somaNotas/3;
}

int main(){
    Alunos a[100];
    double media;
    char nomeMaiorNota[100];

    cadastro(a, &media, nomeMaiorNota);

    printf("Media de notas: %.2lf", media);
    printf("Nome do Melhor aluno: %s", nomeMaiorNota);

    return 0;
}