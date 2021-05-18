/*********************************************************************************************************

Fa�a um algoritmo para ler um valor N (validar para aceitar apenas valores positivos) e imprimir os N primeiros n�meros inteiros.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int n;
    do
    {
        printf("\nDigite um valor positivo para estabelecer um n�mero de elementos crescente: \nObs: Digite o n�mero 0 para encerrar o programa.\n");
        scanf("%d", &n);
        if(n>0)
        {
            printf("\nOs %d primeiros numeros inteiros: ", n);
            for(int i = 0;i < n; i++)
                printf("\n%d", i);
        }
        else if(n<0)
            printf("\nNumero invalido.\n\n");
    }
    while(n != 0);
    return 0;
}
