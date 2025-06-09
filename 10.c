/*Escreva uma função que receba um número inteiro e retorne 1 se ele for primo, ou 0 caso contrário. */

#include <stdio.h>

int primo(int num){
    int i, primo = 1;

    if (num <= 1)
        return 0;

    for(i = 2; i < num && primo; i++){
        if(num % i == 0)
            primo = 0;
    }
    return primo;
}


int main(){

    int num;

    scanf("%d", &num);

    printf("%s", primo(num) ? "Eh primo" : "Nao eh primo");

}