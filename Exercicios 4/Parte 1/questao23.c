/*********************************************************************************************************

Faça um algoritmo que receba uma sequência de números e retorne o maior e o menor número da sequência.
A quantidade de números n é fornecida pelo usuário.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int n;
    float num, maior, menor;
    printf("\nDescubra o maior e o menor numero de uma sequencia.\n");

    printf("\nDigite a quantidade de numeros que serão inseridos: ");
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

    printf("\n\nO maior numero é %.2f e o menor é %.2f.\n", maior, menor);
    return 0;
}
