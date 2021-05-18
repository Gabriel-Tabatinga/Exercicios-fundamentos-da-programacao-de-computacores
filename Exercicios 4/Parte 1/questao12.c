/*********************************************************************************************************

Ler 10 valores e escrever quantos destes valores c.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    printf("\nDigite 10 valores para descobrir quantos são negativos.\n");
    float n;
    int j = 0;

    for(int i=1; i<=10; i++)
    {
        printf("\nDigite o %d numero: ", i);
        scanf("%f", &n);
        fflush(stdin);
        if(n < 0)
            j++;
    }
    printf("\n\nDentre esses numeros, %d são negativos.\n", j);
    return 0;
}
