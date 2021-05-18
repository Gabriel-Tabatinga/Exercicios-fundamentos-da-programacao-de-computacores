/*********************************************************************************************************

Faça  um  algoritmo  para  imprimir  os  números  de  1  a  10  utilizando  uma  estrutura  ENQUANTO  e  um contador.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int n = 0;
    printf("\nContador:");
    while(n < 10)
    {
        n ++;
        printf("\n%d", n);
    }
    printf("\n");
    return 0;
}
