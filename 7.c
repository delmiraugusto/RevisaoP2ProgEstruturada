/*Escreva uma subrotina que aumente o salário de todos os funcionários de um vetor em 10%.
Funcionario com os campos: nome (string), cargo (string), salario (float)*/

#include <stdio.h>

typedef struct {
    char nome[50];
    char cargo[50];
    double salario;

} Funcionario;



void ler(Funcionario funcionario[], int n){
    int i;
    for(i = 0; i < n; i++){
        scanf(" %[^\n]", funcionario[i].nome);
        scanf(" %[^\n]", funcionario[i].cargo);
        scanf("%lf", &funcionario[i].salario);
        funcionario[i].salario = (funcionario[i].salario) * 1.10;
    }
}

void imprimir(Funcionario funcionario[], int n){
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\n\nFuncionario #%d", (i+1));
        printf("\nNome: %s", funcionario[i].nome);
        printf("\nCargo: %s", funcionario[i].cargo);
        printf("\nSalario: %.2lf", funcionario[i].salario);
    }    
}

int main(){

    Funcionario func[100];
    int n;

    printf("Quantos Funcionarios serao lidos?");
    scanf("%d", &n);

    ler(func, n);

    imprimir(func, n);

    return 0;
}
