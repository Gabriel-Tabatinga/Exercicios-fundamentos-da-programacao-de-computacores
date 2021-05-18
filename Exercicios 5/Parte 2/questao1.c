/*********************************************************************************************************

Faça uma sub-rotina que receba um número inteiro e positivo N como parâmetro e retorne a soma dos núme-
ros inteiros existentes entre o número 1 e N (inclusive).

*********************************************************************************************************/

#include <stdio.h>

int subrotina(int N)
{
    int soma;
    for(int i = 0; i < N; i++)
        soma += i;
    return soma;
}
int main()
{
    int N, soma;
    printf("\nDigite um numero inteiro e positivo:");
    scanf("\n%d", &N);
    soma = subrotina(N);
    printf("\nSoma dos inteiros entre 1 e %d = %d\n", N, soma);
    return 0;
}
