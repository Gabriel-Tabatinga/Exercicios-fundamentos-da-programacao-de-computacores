/*********************************************************************************************************

Faça uma sub-rotina que receba um valor inteiro e positivo, calcule e mostre seu fatorial.

*********************************************************************************************************/

#include <stdio.h>

void calculafatorial(double a)
{
    double fat;
    for(fat = 1; a > 1; a--)
        fat *= a;
    printf("\nFatorial de %.4lf = %.4lf\n", a, fat);
}
int main()
{
    double a;
    printf("\nDigite um valor para encontrar seu fatorial: ");
    scanf("%lf", &a);
    calculafatorial(a);
    return 0;
}
