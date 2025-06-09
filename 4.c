/*Escreva uma função que receba uma pessoa e retorne o seu IMC. 
Pessoa com os campos: nome (string), idade (int), peso (float), altura (float).*/

#include <stdio.h>

typedef struct {
    char nome[20];
    double peso, altura, imc;
    int idade;

} pessoa;

double IMC(pessoa (*a)) {

    scanf(" %[^\n]", (*a).nome);
    scanf("%d", &(*a).idade);
    scanf("%lf", &(*a).peso);
    scanf("%lf", &(*a).altura);

    (*a).imc = ((*a).peso)/(((*a).altura)*((*a).altura));

    return (*a).imc;

}

int main() {
    pessoa a;
    double imc;

    imc = IMC(&a);

    printf("%lf\n", imc);

    return 0;
}