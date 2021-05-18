/*********************************************************************************************************

Faça uma função recursiva para calcular (e imprimir) os elementos da seguinte sequência: 1+1/2+1/3+1/4+...+1/N.

*********************************************************************************************************/

#include <stdio.h>

double elementoFuncao(double x)
{
    if(x==1)
        return 1;
    else
        return 1 / x + elementoFuncao(x - 1);
}


int main()
{
    int x;
    printf("\nCALCULO ELEMENTOS 1 + 1/2 + 1/3 +...+ 1/N \n\n");
    printf("Digite o numero N: ");
    scanf("%d", &x);
    printf("Sequencia = %lf", elementoFuncao(x));
    return 0;
}
