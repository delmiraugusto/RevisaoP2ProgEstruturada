/* Escreva uma subrotina que receba um vetor de inteiros e o seu tamanho, e imprima todos os números pares */

#include <stdio.h>

void ler(int vet[], int quant){
    int num, i;

    for(i = 0; i < quant; i++)
        scanf("%d", &vet[i]);
}

int imprimirPares(int vet[], int quant){
    int i, temPar = 0;

    printf("[");
    for(i = 0; i < quant; i++){
        if(vet[i] % 2 == 0){
            printf(" %d", vet[i]);
            temPar = 1;
        }
    }

    if(temPar == 0)
        printf(" Vetor sem nenhum numero par!!!");

    printf(" ]");
}


int main(){
    
    int quant, vet[100];

    scanf("%d", &quant);

    ler(vet, quant);

    imprimirPares(vet, quant);

    return 0;
}
