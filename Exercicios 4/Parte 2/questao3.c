/*********************************************************************************************************

Faça um algoritmo que calcule o seguinte somatório:
S= 1/225 + 2/196 + 4/169 + 8/144 + ... + 16384/1.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    double i, dividendo, divisor , multdivisor, soma;
    dividendo = 1;
    divisor = 15;
    soma = 0;

    for(i = 1; i<=15; i++)
    {
        multdivisor = divisor * divisor;
        soma = soma + (dividendo / multdivisor);
        //teste -> printf("\n%lf / %lf = %lf", dividendo, multdivisor, soma);
        dividendo+=dividendo; // 1, 2, 4, 8...
        divisor--; // 15, 14, 13, 12...
    }
    printf("\n S= 1/225 + 2/196 + 4/169 + 8/144 + ... + 16384/1.\n");
    printf("\n A soma dessa equação é: %.2lf.\n", soma);
    return 0;
}
