/*********************************************************************************************************

Fa�a um algoritmo para imprimir os n�meros de 1 a 10 utilizando uma estrutura FA�A/ENQUANTO e um contador.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int n = 0;

    printf("\nContador: ");
    do
    {
        n++;
        printf("\n%d", n);
    }
    while(n <10);

    printf("\n");
    return 0;
}
