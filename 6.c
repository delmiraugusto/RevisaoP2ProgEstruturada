/*Escreva uma função que receba um funcionário e um percentual de aumento, e retorne o novo salário.
Funcionario com os campos: nome (string), cargo (string), salario (float).*/

#include <stdio.h>

typedef struct {
    char nome[20], cargo[20];
    double salario;

} funcionario;

double calculo_salario(funcionario (*operario)) {
    float percentual;

    scanf(" %[^\n]", (*operario).nome);
    scanf(" %[^\n]", (*operario).cargo);
    scanf("%lf", &(*operario).salario);
    scanf("%f", &percentual);

    percentual = percentual/100; 

    (*operario).salario = (*operario).salario + ((*operario).salario)*percentual;

    return (*operario).salario;
}

int main() {
    funcionario operario;
    double novoSalario;

    novoSalario = calculo_salario(&operario);

    printf("%lf", novoSalario);

    return 0;
}