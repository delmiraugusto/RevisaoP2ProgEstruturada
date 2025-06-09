/* Escreva uma função que receba um vetor de inteiros e o seu tamanho, e retorne a média dos valores. */

#include <stdio.h>


void ler(int vet[], int quant){
    int i;

    for (i = 0; i < quant; i++){
        scanf("%d", &vet[i]);
    }
}

double media(int vet[], int quant){
    double soma = 0, media;
    int i;
    
    for (i = 0; i < quant; i++){
        soma += vet[i];
    }

    media = soma/quant;
    return media;
}

int main(){
    int quant, vet[100];

    scanf("%d", &quant);

    ler(vet, quant);

    printf("\nMedia: %.2lf", media(vet, quant));

}