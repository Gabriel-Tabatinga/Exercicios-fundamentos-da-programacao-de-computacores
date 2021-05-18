/*********************************************************************************************************

Faça um algoritmo que receba um inteiro positivo e retorne sua representação no formato binário.

*********************************************************************************************************/

#include <stdio.h>

int main()
{
    int j, i, num;
    int flag = 0;

    /***************************************************
    mesmo seguindo o passo a passo da aula nao consegui
    ***************************************************/

    printf("\nDigite um numero inteiro e positivo: ");
    scanf("%d", &num);

    while(num <= 0)
    {
        printf("\nNumero invalido, tente novamente.\n");
        printf("\nDigite um numero inteiro e positivo: ");
        scanf("%d", &num);
    }
    for (i = 31; i >= 0; i--);
    {
        j = num >> i;
        j & 1 ? printf("1 ") : printf("0 ");
    }
    return 0;
}
