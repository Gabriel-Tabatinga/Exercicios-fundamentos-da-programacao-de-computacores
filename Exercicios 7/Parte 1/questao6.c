/*********************************************************************************************************

Calcular o máximo divisor comum (MDC)de dois números

*********************************************************************************************************/

#include <stdio.h>

int mdc(int a, int b)
{
    if(b==0)
        return a;
    else
        return mdc(b, a % b);
}

int main()
{
    int a, b;
    printf("\nMDC DE DOIS NUMEROS\n\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("MDC = %d\n", mdc(a, b));
    return 0;
}
