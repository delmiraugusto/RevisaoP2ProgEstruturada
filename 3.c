/*Escreva uma função que receba um Livro e retorne 1 se o ano for superior a 2000, ou 0 caso contrário.
Livro com os campos: título (string), autor (string), ano (int).*/

#include <stdio.h>

typedef struct {
    char titulo[20], autor[20];
    int ano;

} livro;

int ano(livro *obra) {

    scanf(" %[^\n]", (*obra).titulo);
    scanf(" %[^\n]", (*obra).autor);
    scanf("%d", &(*obra).ano);

    if((*obra).ano > 2000)
        return 1;
    else
        return 0;
}

int main() {
    livro obra;
    int value;

    value = ano(&obra);

    printf("%d\n", value);

    return 0;
}