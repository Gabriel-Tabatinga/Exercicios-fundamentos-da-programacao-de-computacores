/*********************************************************************************************************

Implemente  uma  fun��o  recursiva  para  solucionar  cada  um  dos  problemas  descritos  abaixo,
supondo que sua fun��o  receba  como par�metros um vetor A de inteiros e a quantidade N de elementos armazenada atualmente no vetor:

a.Imprimir os elementos na ordem em que se encontram armazenados (isto �, A[0], A[1], . . ., A[n-1]);
b.Imprimir  os  elementos  na  ordem  contr�ria  �quele  em  que  se  encontram  armazenados (isto �, A[n-1], . . ., A[1], A[0]);
c.Calcular o somat�rio do valor de todos os elementos;
d.Calcular a m�dia do valor de todos os elementos.
Al�m disso, voc� deve implementar um programa para testar suas fun��es.

*********************************************************************************************************/

#include <stdio.h>

void problemaA(int n, int A[n])
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}

void problemaB(int n, int A[n])
{
    for(n; n > 0 ; n--)
    {
        printf("%d ", A[n-1]);
    }
}
void problemaC(int n, int A[n])
{
    int soma = 0;
    for(int i = 0; i < n; i++)
    {
        soma+= A[i];
    }
    printf("%d", soma);
}
void problemaD(int n, int A[n])
{
    int soma;
    double media;
    for(int i = 0; i < n; i++)
    {
        soma+= A[i];
    }
    media = (double) soma / (double)n;
    printf("%.2lf", media);
}

int main()
{
    int n;
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
    printf("A = ");
    problemaA(n, A);
    printf("\nB = ");
    problemaB(n, A);
    printf("\nC = ");
    problemaC(n, A);
    printf("\nD = ");
    problemaD(n, A);
    printf("\n");
}
