/*********************************************************************************************************

Fa�a um algoritmo que imprima os n�meros �mpares existentes de entre 1(inclusive) e 9 (inclusive

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    printf("\nN�meros �mpares entre 1 e 9: ");
    for(int n = 1; n <= 9; n += 2)
        printf("\n%d", n);
}
