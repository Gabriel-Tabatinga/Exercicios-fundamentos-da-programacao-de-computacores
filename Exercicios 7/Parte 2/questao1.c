/*********************************************************************************************************

Implemente  uma  função  recursiva  para  solucionar  cada  um  dos  problemas  descritos  abaixo,
supondo que sua função  receba  como parâmetros um vetor A de inteiros e a quantidade N de elementos armazenada atualmente no vetor:

a.Imprimir os elementos na ordem em que se encontram armazenados (isto é, A[0], A[1], . . ., A[n-1]);
b.Imprimir  os  elementos  na  ordem  contrária  àquele  em  que  se  encontram  armazenados (isto é, A[n-1], . . ., A[1], A[0]);
c.Calcular o somatório do valor de todos os elementos;
d.Calcular a média do valor de todos os elementos.
Além disso, você deve implementar um programa para testar suas funções.

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
