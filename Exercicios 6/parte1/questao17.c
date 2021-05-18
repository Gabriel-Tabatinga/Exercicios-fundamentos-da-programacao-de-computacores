/*********************************************************************************************************

Elabore uma sub-rotina que calcule o m�ximo divisor comum (MDC) de dois n�meros recebidos como
par�metros.

*********************************************************************************************************/

#include <stdio.h>

int mdc(int a, int b)
{
    int aux;
    while(b != 0)
    {
        aux = a % b;
        a = b;
        b = aux;
    }
    return a;
}

int main()
{
    int a, b, resultado;
    printf("\nDigite 2 numeros e descubra o maximo divisor comum: ");
    scanf("%d %d", &a, &b);
    resultado = mdc(a, b);
    printf("\n\nmdc de %d e %d = %d", a, b, resultado);
    return 0;
}
