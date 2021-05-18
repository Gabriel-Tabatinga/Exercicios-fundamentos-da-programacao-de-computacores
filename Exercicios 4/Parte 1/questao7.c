/*********************************************************************************************************

Faça um algoritmo que imprima na tela os 10 primeiros números inteiros maiores que 100 utilizando um a estrutura de repetição.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    printf("\n10 primeiros numeros inteiros maiores que 100:\n");
    for(int n = 101; n<=111;n++)
        printf("\n%d", n);
}
