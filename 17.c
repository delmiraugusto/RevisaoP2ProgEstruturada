/* Escreva uma subrotina que receba uma string e imprima seus caracteres em ordem inversa. */


#include <stdio.h>
#include <string.h>

void ler(char palavra[]){
    scanf(" %[^\n]", palavra);
}

void inversoFrase(char palavra[], char inverso[]){
    int i, j = 0, tamanho = strlen(palavra) - 1;
    
    for(i = tamanho; i >= 0 ; i--){
        inverso[j] = palavra[i];
        j++;
    }
}

int main(){
    char palavra[100], inverso[100];

    ler(palavra);

    inversoFrase(palavra, inverso);

    printf("O inverso de %s eh: %s", palavra, inverso);

    return 0;
}