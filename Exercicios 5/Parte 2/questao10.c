/*********************************************************************************************************

Elabore uma sub-rotina que receba como parâmetro um valor N (inteiro e maior ou igual a 1) e determi-
ne o valor da sequência S, descrita a seguir:

S = 1 + 1/2 + 1/3...

A quantidade de parcelas que compõe S é igual a N.

*********************************************************************************************************/

#include <stdio.h>

void sequencia(int n)
{
    double seq = 1;
    double i;
    for(i = 1; i < n; i++)
    {
        seq += 1 / (i + 1);
    }
    printf("\n\nSequencia = %.3lf\n", seq);
}
int main()
{
    int n;
    int flag = 1;
    do
    {
        printf("\nDigite um parametro inteiro e maior ou igual a 1 para a sequencia S = 1 + 1/2 + 1/3...    : ");
        scanf("%d", &n);
        if(n >= 1)
        {
            flag = 0;
            sequencia(n);
        }
        else
            printf("\n\nValor invalido.\n\n");
    }
    while(flag);
    return 0;
}
