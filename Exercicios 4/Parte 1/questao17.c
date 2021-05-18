/*********************************************************************************************************

Faça  um  algoritmo  para  ler  uma  quantidade indeterminada  de  valores  inteiros.
Para  cada  valor fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR.
O algoritmo será encerrado imediatamente após a leitura de um valor NULO (zero) ou NEGATIVO.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    printf("\nDescubra se um numero inteiro é par ou impar.\nObs: Digite o valor 0 para encerrar a repetição.\n");

    int flag = 0;
    int n;
    do
    {
        printf("\nDigite um valor:");
        scanf("%d", &n);
        fflush(stdin);
        if(n > 0)
        {
            if(n % 2 == 0)
                printf("O numero digitado é par.\n");
            else
                printf("O numero digitado é impar.\n");
        }
        else
            flag = 1;
    }
    while(flag == 0);
    return 0;
}
