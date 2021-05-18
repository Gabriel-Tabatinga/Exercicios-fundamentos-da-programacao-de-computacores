/*********************************************************************************************************

Faça uma sub-rotina que receba um valor inteiro e verifique se ele é positivo ou negativo.

*********************************************************************************************************/

#include <stdio.h>

void subrotina(int n)
{
    if(n >= 0)
        printf("\nPositivo.\n");
    else
        printf("\nNegativo.\n");
}
int main()
{
    int n;
    printf("\nDigite um valor inteiro e descubra se ele e positivo ou negativo: ");
    scanf("%d", &n);
    subrotina(n);
    return 0;
}
