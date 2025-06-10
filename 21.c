/* Escreva uma função que receba uma string e retorne o número de vezes que uma 
   letra específica aparece nela (receber também o caractere). */

#include <stdio.h>

void ler(char frase[], char *caractere){
    scanf(" %[^\n]", frase);
    scanf(" %c", &(*caractere));
}

int quantLetra(char frase[], char caractere){
    int i, quant = 0;
    for (i = 0; frase[i] != '\0'; i++){
        if(frase[i] == caractere)
            quant++;
    }

    return quant;
    
}

int main(){

    char frase[100], caractere;
    int quantTotal;

    ler(frase, &caractere);

    quantTotal = quantLetra(frase, caractere);

    printf("A quantidade de %c na frase %s eh de: %d", caractere, frase, quantTotal);

    return 0;

}