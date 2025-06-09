/*Escreva uma função que receba um número inteiro e retorne a soma dos seus dígitos.*/

#include <stdio.h>

void ler(int (*num)) {

    scanf("%d", &(*num));

}

int soma_digito(int num) {
    int soma = 0;

    if(num < 0)
        num = -num;

    while (num > 0){
        soma += num % 10;
        num = num / 10;
    }
    return soma;
}

int main() {
    int soma, num;

    ler(&num);

    soma = soma_digito(num);

    printf("Soma: %d", soma);

    return 0;
}