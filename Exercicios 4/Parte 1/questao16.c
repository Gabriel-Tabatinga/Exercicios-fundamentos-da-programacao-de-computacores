/*********************************************************************************************************

Escreva outra vers�o do algoritmo para resolver o problema anterior utilizando a estrutura com teste de sa�da no in�cio da repeti��o (ENQUANTO).

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    printf("\nDescubra se um numero � positivo ou negativo.\nObs: Digite o valor 0 para encerrar a repeti��o.\n");

    int flag = 0;
    float n;
    while(flag == 0)
    {
        printf("\nDigite um valor:");
        scanf("%f", &n);
        fflush(stdin);
        if(n != 0)
        {
            if(n>0)
                printf("O numero digitado � positivo.\n");
            else
                printf("O numero digitado � negativo.\n");
        }
        else
            flag = 1;
    }
    return 0;
}
