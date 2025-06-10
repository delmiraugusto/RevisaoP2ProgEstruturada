/*Escreva uma subrotina que receba uma string e substitua todos os espaços por hífens*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void substituir(char str[]) {
    int i;

    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ' ')
            str[i] = '-';
    }
}

int main() {
    char str[100];

    substituir(str);

    printf("%s\n", str);

    return 0;
}