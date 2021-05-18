/*********************************************************************************************************

Faça um algoritmo que imprima a tabuada do 8 utilizando uma estrutura de repetição.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    printf("\nTabuada do 8\n\n");
    int n;
    for(int i = 0; i<= 10; i++)
    {
        n = 8 * i;
        printf("8 x %d = %d\n", i, n);
    }
    return 0;
}
