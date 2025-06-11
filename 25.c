/* Crie uma struct chamada Temperatura com uma matriz 7x4 de floats representando a temperatura de uma semana em 4 horários por dia. 
Escreva uma subrotina para ler todas as temperaturas.
Escreva uma função que calcule a média da temperatura da semana.
Escreva uma subrotina que imprima as temperaturas acima da média da Temperaturas.
Escreva uma função que, dado um dia (linha) e uma Temperatura, retorne a média das temperaturas daquele dia. */

#include <stdio.h>

typedef struct {
    float mat[7][4];
} Temperatura;

void ler(Temperatura *temp, int *dia) {
    int i, j;
    for (i = 0; i < 7; i++)
        for (j = 0; j < 4; j++)
            scanf("%f", &(*temp).mat[i][j]);

    scanf("%d", &(*dia));
    (*dia)--;
    printf("Dia: %d", (*dia)+1);
}

float mediaTemperatura(Temperatura temp) {
    int i, j, cont = 0;
    float somaTemperatura = 0.0, media;

    for (i = 0; i < 7; i++)
        for (j = 0; j < 4; j++){
            somaTemperatura += temp.mat[i][j];
            cont++;
        }

    media = somaTemperatura / cont;

    return media;
}

void imprimir(Temperatura temp, float media) {
    int i, j;

    printf("\nTemperaturas acima da media:\n");

    for (i = 0; i < 7; i++)
        for (j = 0; j < 4; j++){
            if(temp.mat[i][j] > media){
                printf("%.2f ", temp.mat[i][j]);
            }
        }
}

float media_dia(Temperatura temp, int dia) {
    int j;
    float soma = 0, media;

    for(j=0; j<4; j++)
        soma += temp.mat[dia][j];

    media = soma/4;

    return media;
}

int main(){
    Temperatura temp;
    float media, mediaDia;
    int dia;

    ler(&temp, &dia);
    
    media = mediaTemperatura(temp);

    printf("\nMedia: %.2f", media);
    
    mediaDia = media_dia(temp, dia);

    imprimir(temp, media);

    printf("\nMedia de temperatura do dia %d eh: %.2f\n", (dia+1), mediaDia);


}