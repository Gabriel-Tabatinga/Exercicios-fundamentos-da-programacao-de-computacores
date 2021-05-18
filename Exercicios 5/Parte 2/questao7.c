/*********************************************************************************************************

Elabore uma sub-rotina que leia um número não determinado de valores positivos e retorne a média aritmé-
tica desses valores. Terminar a entrada de dados com o valor zero.

*********************************************************************************************************/

#include <stdio.h>

void media()
{
    int i, flag = 1;
    double n, media, soma = 0;
    do{
        printf("\nDigite um dos valores: ");
        scanf("%lf", &n);
        fflush(stdin);
        if(n > 0)
        {
            i++;
            soma += n;
        }
        else if(n == 0)
            flag = 0;
        else
            printf("\nValor invalido.\n");
    }
    while(flag);
    media = soma / i;
    printf("\n\nMedia aritmetica = %.2lf.\n", media);
}
int main()
{
    printf("\nDigite um numero de valores positivos para realizar a media aritmetica.\nObs: Digite 0 para encerrar a entrada de dados.\n");
    media();
    return 0;
}

