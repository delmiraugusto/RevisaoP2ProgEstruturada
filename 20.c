/* Escreva uma função que receba uma string e retorne a quantidade de palavras nela. Considere palavras separadas por espaços. */

#include <stdio.h>

void ler(char frase[]){
    scanf(" %[^\n]", frase);
}

int quantPalavras(char frase[]){
    int quant = 1, i;

    for(i = 0; frase[i] != '\0'; i++){
        if(frase[i] == ' ')
            quant++;
    }
    return quant;
}

int main(){
    char frase[100];
    int quantTotal;

    ler(frase);

    quantTotal = quantPalavras(frase);

    printf("O total de palavras na frase %s eh: %d", frase, quantTotal);
}
