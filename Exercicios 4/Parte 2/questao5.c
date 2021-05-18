/*********************************************************************************************************

Faça um algoritmo que receba um inteiro positivo n e prove a igualdade abaixo:
1^2 + 2^2 + 3^2 + ... + n^2 = (n(n + 1)(2n+1))/6

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    double n, esquerda, direita;
    printf("\nDigite um numero inteiro e positivo: ");
    scanf("%lf", &n);
    for(int i = 1; i <= n; i++)
        esquerda = esquerda + (i * i);
    //printf("esquerda %.2lf\n", esquerda);

    direita = (n * (n + 1)*(2 * n + 1))/6;
    //printf("direita %.2lf\n", direita);

    printf("\n\nEquação:\n%.2lf = %.2lf.\n", esquerda, direita);
    if(esquerda = direita)
        printf("\nA igualdade da equação é verdadeira.\n");
    else
        printf("\nA igualdade da equação é falsa.\n");
    return 0;
}
