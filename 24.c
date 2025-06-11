/* Crie uma struct chamada Sala com uma matriz 5x5 de inteiros representando lugares em uma sala de aula (0 = vazio, 1 = ocupado). 
    Escreva uma subrotina para ler os dados da sala.
    Escreva uma subrotina que conte e retorne o número total de lugares ocupados.
    Escreva uma subrotina que receba uma Sala e marque todos os assentos da última fileira como ocupados. 
*/

#include <stdio.h>

typedef struct {
    int mat[5][5];
} Sala;
 
void ler(Sala *sala){
    int i, j;
    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            scanf("%d", &(*sala).mat[i][j]);

}

void contarLugares(int *lugaresOcupados, Sala *sala){
    int i, j;
    (*lugaresOcupados) = 0;
    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            if((*sala).mat[i][j] == 1)
                (*lugaresOcupados)++;
}

void ultimaFileiraOcupada(Sala *sala){
    int i, j;
    for(j = 0; j < 5; j++)
        (*sala).mat[4][j] = 1;
}

void imprimir(Sala *sala){
    int i, j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++)
            printf(" %d |", (*sala).mat[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main(){
    Sala sala;
    int lugaresOcupados;

    ler(&sala);

    contarLugares(&lugaresOcupados, &sala);

    printf("Total de lugares ocupados: %d\n", lugaresOcupados);

    imprimir(&sala);
    
    ultimaFileiraOcupada(&sala);

    contarLugares(&lugaresOcupados, &sala);

    printf("Total de lugares ocupados: %d\n", lugaresOcupados);
    
    imprimir(&sala);

}