/*Crie uma struct chamada Tabuleiro com uma matriz 3x3 de char. 
    Escreva uma subrotina que imprima esse tabuleiro em formato de jogo da velha.
    Escreva uma subrotina que retorne quem foi o ganhador.*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct {
    char mat[3][3];

} tabuleiro;

void imprimir_jogo(tabuleiro t){
    printf(" %c  | %c  | %c \n", t.mat[0][0], t.mat[0][1], t.mat[0][2]);
    printf("----+----+----\n");
    printf(" %c  | %c  | %c \n", t.mat[1][0], t.mat[1][1], t.mat[1][2]);
    printf("----+----+----\n");
    printf(" %c  | %c  | %c \n", t.mat[2][0], t.mat[2][1], t.mat[2][2]); 
}

char jogo_da_velha(tabuleiro *t) {
    int i, j, acabou = 0, invalido, turno = 1;
    char result, jogada, player1, player2;

    do {
        printf("Escolha o primeiro a jogar (x/o): ");
        scanf(" %c", &player1);
        player1 = tolower(player1);
        if(player1 == 'x')
            player2 = 'o';
        else
            player2 = 'x';

    } while(player1 != 'x' && player1 != 'o');

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            (*t).mat[i][j] = ' ';

    imprimir_jogo((*t));

    while(acabou == 0){
        do {
            scanf("%d", &i);
            scanf("%d", &j);
            i--;
            j--;

            if((i > 2 || i < 0) || (j > 2 || j < 0)){
                printf("Selecione uma posicao valida, seu energumeno.\n");
                invalido = 1;
            }
            else
                invalido = 0;

        } while (invalido);

        if(turno % 2 != 0)
            jogada = player1;
        else
            jogada = player2;

        if((*t).mat[i][j] == ' '){
            (*t).mat[i][j] = jogada;
            turno++;

            if((*t).mat[0][0] == (*t).mat[0][1] && (*t).mat[0][1] == (*t).mat[0][2] && (*t).mat[0][0] != ' '){ acabou = 1;  result = (*t).mat[0][0]; }
            if((*t).mat[1][0] == (*t).mat[1][1] && (*t).mat[1][1] == (*t).mat[1][2] && (*t).mat[1][0] != ' '){ acabou = 1;  result = (*t).mat[1][0]; }
            if((*t).mat[2][0] == (*t).mat[2][1] && (*t).mat[2][1] == (*t).mat[2][2] && (*t).mat[2][0] != ' '){ acabou = 1;  result = (*t).mat[2][0]; }
            
            if((*t).mat[0][0] == (*t).mat[1][0] && (*t).mat[1][0] == (*t).mat[2][0] && (*t).mat[0][0] != ' '){ acabou = 1;  result = (*t).mat[0][0]; }
            if((*t).mat[0][1] == (*t).mat[1][1] && (*t).mat[1][1] == (*t).mat[2][1] && (*t).mat[0][1] != ' '){ acabou = 1;  result = (*t).mat[0][1]; }
            if((*t).mat[0][2] == (*t).mat[1][2] && (*t).mat[1][2] == (*t).mat[2][2] && (*t).mat[0][2] != ' '){ acabou = 1;  result = (*t).mat[0][2]; }

            if((*t).mat[0][0] == (*t).mat[1][1] && (*t).mat[1][1] == (*t).mat[2][2] && (*t).mat[0][0] != ' '){ acabou = 1;  result = (*t).mat[0][0]; }
            if((*t).mat[0][2] == (*t).mat[1][1] && (*t).mat[1][1] == (*t).mat[2][0] && (*t).mat[0][2] != ' '){ acabou = 1;  result = (*t).mat[0][2]; }
        }
        if((*t).mat[0][0] != ' ' && (*t).mat[0][1] != ' ' && (*t).mat[0][2] != ' ' && 
           (*t).mat[1][0] != ' ' && (*t).mat[1][1] != ' ' && (*t).mat[1][2] != ' ' &&
           (*t).mat[2][0] != ' ' && (*t).mat[2][1] != ' ' && (*t).mat[2][2] != ' ' && acabou == 0){
            acabou = 1;
            result = 'v';
        }
        system("clear");
        imprimir_jogo((*t));

    }
    return result;
}

int main() {
    tabuleiro t;
    char result;

    result = jogo_da_velha(&t);

    if(result != 'v')
        printf("\nO vencedor foi: %c\n", result);
    else
        printf("\nDeu velha!\n");
    

    return 0;
}