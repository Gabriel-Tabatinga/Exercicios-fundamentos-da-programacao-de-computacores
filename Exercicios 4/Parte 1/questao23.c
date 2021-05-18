/*********************************************************************************************************

Fa�a um algoritmo que receba uma sequ�ncia de n�meros e retorne o maior e o menor n�mero da sequ�ncia.
A quantidade de n�meros n � fornecida pelo usu�rio.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int n;
    float num, maior, menor;
    printf("\nDescubra o maior e o menor numero de uma sequencia.\n");

    printf("\nDigite a quantidade de numeros que ser�o inseridos: ");
    scanf("%d", &n);
    printf("\n");

    printf("\nDigite o 1 numero: ");
    scanf("%f", &num);
    maior = menor = num;

    for(int i = 2; i <= n; i++)
    {
        printf("\nDigite o %d numero: ", i);
        scanf("%f", &num);
        fflush(stdin);
        if(num > maior)
            maior = num;
        if(num < menor)
            menor = num;
    }

    printf("\n\nO maior numero � %.2f e o menor � %.2f.\n", maior, menor);
    return 0;
}
