/*********************************************************************************************************

Fa�a uma sub-rotina que receba um n�mero inteiro e positivo N como par�metro e retorne a soma dos n�me-
ros inteiros existentes entre o n�mero 1 e N (inclusive).

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
