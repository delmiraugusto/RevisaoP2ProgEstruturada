/* 4. Troca de Coordenadas
Desenvolva um programa que trabalhe com dois pontos no plano cartesiano, definidos por uma struct com coordenadas x e y. O programa deve trocar os valores dessas coordenadas entre os dois pontos, empregando o uso de função e passagem por referência.
*/

#include <stdio.h>

typedef struct {
    double x;
    double y;
    
} Ponto;

void coordenadas(Ponto (*a)) {
    double aux;
    
    scanf("%lf", &(*a).x);
    scanf("%lf", &(*a).y);

    printf("X: %lf\n", (*a).x);
    printf("Y: %lf\n", (*a).y);

    aux = (*a).x;
    (*a).x = (*a).y;
    (*a).y = aux;

    printf("X: %lf\n", (*a).x);
    printf("Y: %lf\n", (*a).y);
}

int main(){
    Ponto a;

    coordenadas(&a);

    return 0;
}