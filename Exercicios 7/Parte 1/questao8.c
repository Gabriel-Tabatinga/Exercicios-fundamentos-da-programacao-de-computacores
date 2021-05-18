/*********************************************************************************************************

Faça uma função recursiva que gere a seguinte sequência:𝐹(𝑛)

*********************************************************************************************************/

#include <stdio.h>

int funcaoSequencia(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    if(n % 2 == 0)
        return 2 * funcaoSequencia(n - 1) + 3 * funcaoSequencia(n - 2);
}

int main()
{
    int x;
    printf("\nSEQUENCIA f(n) {se n==1  1  | se n==2  2   |  se n==impar 2 * F(n - 1) + 3 * f(n - 2)\n\n");
    printf("Digite o numero N: ");
    scanf("%d", &x);
    printf("Sequencia = %d\n", funcaoSequencia(x));
    return 0;
}
