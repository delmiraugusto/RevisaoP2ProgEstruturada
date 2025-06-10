/* Escreva uma função que receba uma string e retorne o número de vogais contidas nela */


#include <stdio.h>
#include <String.h>

void ler(char palavra[]){
    scanf(" %[^\n]", palavra);
}

int quantVogais(char palavra[]){
    int i = 0, quantVogal = 0;

    while (palavra[i] != '\0')
    {
        switch (toLower(palavra[i]))
        {
        case 'a':
            quantVogal++;
            break;
        case 'e':
            quantVogal++;
            break;
        case 'i':
            quantVogal++;
            break;
        case 'o':
            quantVogal++;
            break;
        case 'u':
            quantVogal++
            break;
        }
        i++;
    }
    
    return quantVogal;
}

int main(){
    char palavra[100];
    int total;

    ler(palavra);

    total = quantVogais(palavra);

    printf("Total de Vogais = %d", total);

}