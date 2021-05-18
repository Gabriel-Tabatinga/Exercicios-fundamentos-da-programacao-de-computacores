/*********************************************************************************************************

Implemente  uma  função  recursiva  para  testar  se  um  determinado  número  inteiro  foi  ou  não armazenado em um vetor.
Sua função deve receber como parâmetros um vetor A de inteiros, a quantidade n de elementos armazenada atualmente no vetor e o valor x inteiro a ser pesquisado.
Além disso, como resultado sua função deve retornar 1 caso o elemento seja encontrado ou zero, caso contrário.
Implemente um programa para testar sua função

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
