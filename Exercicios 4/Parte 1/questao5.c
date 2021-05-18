/*********************************************************************************************************

Faça  um  algoritmo  para  ler  um  valor  N  (validar  para  aceitar  apenas  valores  positivos)  e  imprimir apalavra PROGRAMACAO N vezes.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    printf("\nDigite um valor positivo para a quantidade de repetições da palavra programação: ");
    int n;
    scanf("%d", &n);

    if(n >= 0)
        for(int i=1; i<=n;i++)
            printf("\nPROGRAMACAO");
    else
        printf("\nValor invalido.");
    return 0;
}
