/*********************************************************************************************************

Sejam P(x1,y1) e Q(x2,y2) dois pontos quaisquer no plano. A sua distância é dada por:
d = raiz(p(x2 - x1)^2 + (y2 - y1)^2)

Faça um algoritmo que leia várias linhas com quatro valores separados por vírgula, correspondentes às coordenadas  dos  pontos  P  e  Q  e
retorne  a  distância  destes  pares  de  pontos.
A  leitura  dos  dados  será interrompida quando as quatro coordenadas forem iguais a zero.

*********************************************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    double x1, x2, y1, y2;
    printf("\nDigite os valores das coordenadas.\n\n");
    printf("Coordenadas de P = ");
    scanf("%lf,%lf",&x1,&y1);
    printf("\nCoordenadas de Q = ");
    scanf("%lf,%lf",&x2,&y2);

    double d;
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("\n\nDistancia: %.2lf", d);
}
