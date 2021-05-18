/*********************************************************************************************************

Calculo dos n primeiros termos da sequência de Fibonacci

*********************************************************************************************************/

#include <stdio.h>

int fibonacci(int x)
{
    int n;
    if(x==1)
        return 0;
    if(x==2)
        return 1;
    n = fibonacci(x-1)+fibonacci(x-2);
    return n;
}

int main()
{
    int x;
    printf("\nFIBONACCI\n\n");
    printf("Digite os n termos: ");
    scanf("%d", &x);
    for(int i = 1; i <= x; i++)
        printf("%d ", fibonacci(i));
    return 0;
}
