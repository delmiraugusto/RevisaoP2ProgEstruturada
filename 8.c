/*Escreva uma função que retorne o funcionário com maior salário entre dois recebidos.
Funcionario com os campos: nome (string), cargo (string), salario (float).*/

#include <stdio.h>

typedef struct {
    char nome[20], cargo[20];
    double salario;

} Funcionario;

Funcionario maior_salario(Funcionario funcionarios[]) {
    int i, x;
    double maiorSalario = 0;

    for(i=0; i<2; i++){
        scanf(" %[^\n]", funcionarios[i].nome);
        scanf(" %[^\n]", funcionarios[i].cargo);
        scanf("%lf", &funcionarios[i].salario);

        if(funcionarios[i].salario > maiorSalario){
            maiorSalario = funcionarios[i].salario;
            x = i;
        }
    }

    return funcionarios[x];

}

void imprimir(Funcionario funcionario_maior) {

    printf("Nome: %s\n", funcionario_maior.nome);
    printf("Cargo: %s\n", funcionario_maior.cargo);
    printf("Salario: %lf\n", funcionario_maior.salario);
}

int main() {
    Funcionario funcionarios[2], funcionario_maior;

    funcionario_maior = maior_salario(funcionarios);

    imprimir(funcionario_maior);

    return 0;
}