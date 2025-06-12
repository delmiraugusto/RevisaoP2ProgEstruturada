/*2. Cálculo de Operações
Faça um programa que receba dois números inteiros e calcule: a soma, o produto e qual dos dois é o maior. Os resultados devem ser obtidos e retornados por meio de sub-rotinas, e os dados devem ser manipulados através de passagem por referência.
*/

#include <stdio.h>

void calculos(int *n1, int *n2, int *soma, int *produto, int *maior) {

    scanf("%d", &(*n1));
    scanf("%d", &(*n2));

    *soma = (*n1) + (*n2);
    *produto = (*n1) * (*n2);
    
    if((*n1) > (*n2))
        (*maior) = (*n1);
    else
        (*maior) = (*n2);
}

void imprimir(int n1, int n2, int soma, int produto, int maior) {
    printf("N1: %d\n", n1);
    printf("N2: %d\n", n2);
    printf("Soma: %d\n", soma);
    printf("Produto: %d\n", produto);
    printf("Maior: %d\n", maior);
}

int main(){
    int n1, n2, soma, produto, maior;

    calculos(&n1, &n2, &soma, &produto, &maior);

    imprimir(n1, n2, soma, produto, maior);

    return 0;
}