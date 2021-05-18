/*********************************************************************************************************

Crie uma sub-rotina que receba como parâmetro um valor inteiro e positivo e retorne a soma dos divisores
desse valor.

*********************************************************************************************************/

#include <stdio.h>

void somadivisores(int n)
{
    int i;
    int soma = 1;
    for(i = 2; i <= n; i++)
    {
        if(n % i == 0)
            soma += i;
    }
    printf("\n\nSoma dos divisores = %d.", soma);
}
int main()
{
    int n;
    printf("\nDigite um valor inteiro e positivo para somar seus divisores: ");
    scanf("%d", &n);
    somadivisores(n);
    return 0;
}
