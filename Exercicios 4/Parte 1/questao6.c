/*********************************************************************************************************

Faça um algoritmo para ler um número inteiro e escrevê-lo na tela 10 vezes utilizando uma repetição.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int n;
    printf("\nDigite um numero para repeti-lo 10 vezes na tela: ");
    scanf("%d", &n);

    for(int i=1; i<=10;i++)
        printf("\n%d", n);
    printf("\n");
    return 0;
}
