/*********************************************************************************************************

Fa�a  um  algoritmo  para  ler  uma  quantidade indeterminada  de  valores  inteiros.
Para  cada  valor fornecido escrever uma mensagem que indica se cada valor fornecido � PAR ou �MPAR.
O algoritmo ser� encerrado imediatamente ap�s a leitura de um valor NULO (zero) ou NEGATIVO.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    printf("\nDescubra se um numero inteiro � par ou impar.\nObs: Digite o valor 0 para encerrar a repeti��o.\n");

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
                printf("O numero digitado � par.\n");
            else
                printf("O numero digitado � impar.\n");
        }
        else
            flag = 1;
    }
    while(flag == 0);
    return 0;
}
