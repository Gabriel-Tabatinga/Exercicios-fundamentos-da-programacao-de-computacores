/*********************************************************************************************************

Calcule a soma dos números de 1 a n(ex.: 3= 1 + 2 + 3 = 6)

*********************************************************************************************************/

#include <stdio.h>

int somaNumeros(int x)
{
    if(x==0)
        return 0;
    else
        return x + somaNumeros(x-1);
}


int main()
{
    int x;
    printf("\nSOMA DOS NUMEROS DE 1 A N\n\n");
    printf("Digite o numero N: ");
    scanf("%d", &x);
    printf("Soma dos numeros = %d\n", somaNumeros(x));
    return 0;
}
