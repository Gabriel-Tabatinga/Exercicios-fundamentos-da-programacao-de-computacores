/*********************************************************************************************************

Implemente  uma  fun��o  recursiva  para  testar  se  um  determinado  n�mero  inteiro  foi  ou  n�o armazenado em um vetor.
Sua fun��o deve receber como par�metros um vetor A de inteiros, a quantidade n de elementos armazenada atualmente no vetor e o valor x inteiro a ser pesquisado.
Al�m disso, como resultado sua fun��o deve retornar 1 caso o elemento seja encontrado ou zero, caso contr�rio.
Implemente um programa para testar sua fun��o

*********************************************************************************************************/

#include <stdio.h>

int pesquisarVetor(int n, int num, int A[n])
{
    for(int i = 0; i < n; i++)
    {
        if(A[i]==num)
            return 1;
    }
    return 0;
}
int main()
{
    int n, num;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);
    int A[n];
    for(int i = 0; i < n; i++)
    {
        int x;
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &x);
        A[i] = x;
    }
    printf("Digite o valor a ser pesquisado: ");
    scanf("%d", &num);
    int resultado = pesquisarVetor(n, num, A);
    if(resultado==1)
        printf("\nResultado = 1, ou seja encontrou.\n");
    else
        printf("Resultado = 0, ou seja, nao encontrou.\n");
    return 0;
}
