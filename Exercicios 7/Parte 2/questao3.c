/*********************************************************************************************************

Modifique a função implementada anteriormente no item (3) de modo a contabilizar o número de  comparações  com  elementos  do  vetor  que  são  realizadas  por  ela  durante  a  pesquisa  a  um elemento.
Para  um  vetor  com  10 elementos,  qual  são  as  quantidades  mínima  e  máxima  de comparações obtidas?

*********************************************************************************************************/

#include <stdio.h>

//nao entendi o comando da questao, mas tentei fazer como interpretei.

int pesquisarVetor(int n, int num, int A[n])
{
    for(int i = 0; i < n; i++)
    {
        if(A[i]==num)
            return i + 1;
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
    printf("Minimo de comparacoes = %d\nMaximo de comparacoes = %d\n", resultado, n);
    return 0;
}

