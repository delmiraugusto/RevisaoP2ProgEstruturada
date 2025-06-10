/*Escreva uma função que receba um número inteiro e retorne 1 se ele for palíndromo (ex: 121, 1331), ou 0 caso contrário.*/

#include <stdio.h>

int palindromo(int (*num)) {
    int i = 0, vet[100], j, inverso = 0, num2;
    
    scanf("%d", &(*num));

    if((*num) < 0)
        (*num) = -(*num);

    num2 = (*num);

    while (num2 > 0){
        inverso = inverso * 10 + (num2 % 10);
        num2 = num2/10;
    }
    
    printf("%d\n", inverso);

    if(inverso == (*num))
        return 1;
    else
        return 0;
    
}

int main() {
    int num, ehpalindromo;

    ehpalindromo = palindromo(&num);

    
    printf("%s\n", ehpalindromo ? "Eh palindromo" : "Nao eh palindromo");

    return 0;
}