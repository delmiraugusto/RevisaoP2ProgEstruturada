/*Escreva uma função que calcule a média salarial de um vetor de funcionários.
Funcionario com os campos: nome (string), cargo (string), salario (float).*/

#include <stdio.h>

typedef struct {
    char nome[20], cargo[20];
    double salario;

} Funcionario;

double media_salarial(Funcionario funcionarios[], int n) {
    int i;
    double media = 0;

    for(i=0; i<n; i++){
        scanf(" %[^\n]", funcionarios[i].nome);
        scanf(" %[^\n]", funcionarios[i].cargo);
        scanf("%lf", &funcionarios[i].salario);
        media = media + funcionarios[i].salario;
    }
    media = media/n;

    return media;
}

int main() {
    Funcionario funcionarios[100];
    int n;
    double media;

    scanf("%d", &n);

    media = media_salarial(funcionarios, n);

    printf("Media Salarial: %.2lf", media);

    return 0;
}
