/*********************************************************************************************************

Elabore uma sub-rotina que receba dois números como parâmetros e retorne 0, se o primeiro número for
divisível pelo segundo número. Caso contrário, deverá retornar o próximo divisor.

*********************************************************************************************************/

#include <stdio.h>

int subrotina(int a, int b)
{
    int retorno;
    if (a >= b)
    {
        if(a % b == 0)
            retorno = 0;
        else
        {
            do
                b++;
            while(a % b != 0);
            retorno = b;
        }
    }
    if (b > a)
    {
        if(b % a == 0)
            retorno = 0;
        else
        {
            do
                a++;
            while(b % a != 0);
            retorno = a;
        }
    }
    return retorno;
}

int main()
{
    int a, b, retorno;
    printf("\n Digite dois numeros e receba o retorno 0 se eles forem divisiveis ou receba o retorno do valor de um proximo divisor.\n");
    scanf("%d %d", &a, &b);
    retorno = subrotina(a, b);
    printf("\n%d\n", retorno);
    return 0;
}
