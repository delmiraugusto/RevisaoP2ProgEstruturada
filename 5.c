/*Escreva uma subrotina que receba um vetor de pessoas e imprima os nomes daqueles com IMC acima de 30.
Pessoa com os campos: nome (string), idade (int), peso (float), altura (float).*/

#include <stdio.h>

typedef struct {
    char nome[20];
    double peso, altura, imc;
    int idade;

} pessoa;

void IMC(pessoa pessoas[], int n) {
    int i, j;

    for(i=0; i<n; i++){
        scanf(" %[^\n]", pessoas[i].nome);
        scanf("%d", &pessoas[i].idade);
        scanf("%lf", &pessoas[i].peso);
        scanf("%lf", &pessoas[i].altura);
        pessoas[i].imc = (pessoas[i].peso)/((pessoas[i].altura)*(pessoas[i].altura));
    }

    for(i=0; i<n; i++){
        if(pessoas[i].imc > 30)
            printf("%s\n", pessoas[i].nome);
    }

}

int main() {
    pessoa pessoas[2];

    IMC(pessoas, 2);

    return 0;
}