/*Escreva uma função que receba uma MatrizQuadrada e retorne a soma da diagonal secundária.
   obs: crie um tipo para representar a matriz*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct {
    int mat[100][100];

} matriz;

int diagonal_secundaria(matriz m) {
    int n, i, j, soma_diag = 0;
    srand(time(NULL));

    printf("Informe a ordem da matriz: \n");
    scanf("%d", &n);
    n--;

    for(i=0; i<=n; i++){
        for(j=0; j<=n; j++){
            m.mat[i][j] = (rand()%99) + 1;
            printf("%3d", m.mat[i][j]);
            if(j == n - i)
                soma_diag += m.mat[i][j];
        }
        printf("\n");
    }

    return soma_diag;
}

int main() {
    matriz m;
    int soma;

    soma = diagonal_secundaria(m);

    printf("\nA soma da diagonal secundaria eh: %d\n", soma);
    

    return 0;
}