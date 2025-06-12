/* 1. Cadastro de Pessoa
    Crie um programa que permita cadastrar os dados de uma pessoa contendo: nome, idade e altura. 
    Os dados devem ser armazenados em uma struct. O programa deve permitir o preenchimento e a exibição das informações 
    dessa pessoa, utilizando recursos como função e passagem por referência.
 */

 #include <stdio.h>

 typedef struct {
    char nome[100];
    int idade;
    double altura;
} Pessoa;

void cadastrar(Pessoa *p){
    scanf(" %[^\n]", (*p).nome);
    scanf("%d", &(*p).idade);
    scanf("%lf", &(*p).altura);
}
 
void imprimir(Pessoa p){
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Altura: %.2lf\n", p.altura);
}

int main() { 

    Pessoa p;

    cadastrar(&p);

    imprimir(p);

    return 0;

}