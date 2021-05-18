/*********************************************************************************************************

Faça  um algoritmo  para  escrever  a  palavra  PROGRAMACAO  5  vezes  utilizando  um  a  estrutura  de repetição.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    for(int i = 1; i <= 5; i++)
        printf("\nPROGRAMACAO");
}
