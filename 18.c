/*Escreva uma função que receba uma string e retorne 1 se ela for um palíndromo, ou 0 caso contrário. Ignore espaços e diferenças entre maiúsculas e minúsculas.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindromo(char str[]) {
    int i, j = 0;
    char s_espaco[100], inverso[100];

    scanf(" %[^\n]", str);

    for(i=0; str[i] != '\0'; i++){
        if(str[i] != ' '){
            s_espaco[j] = tolower(str[i]);
            j++;
        }
    }

    printf("%s\n", s_espaco);

    j = 0;

    for(i = strlen(s_espaco) - 1; i >= 0; i--){
        inverso[j] = s_espaco[i];
        j++;
    }

    printf("%s\n", inverso);

    if(strcmp(s_espaco, inverso) == 0)
        return 1;
    else
        return 0;
}

int main() {
    char str[100];
    int ehPalindromo;

    ehPalindromo = palindromo(str);

    printf("%s\n", ehPalindromo ? "Eh palindromo" : "Nao eh palindromo");

    return 0;
}