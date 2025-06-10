/*Escreva uma função que receba um número inteiro positivo e retorne seu fatorial.*/

#include <stdio.h>

int fatorial(int num) {
    int i, fat = num;

    for(i=1; i<num; i++){
        fat = fat*i;
    }

    return fat;
}

int main() {
    int num, fat;

    scanf("%d", &num);

    fat = fatorial(num);

    printf("O fatorial do numero: %d eh %d", num, fat);

    return 0;
}