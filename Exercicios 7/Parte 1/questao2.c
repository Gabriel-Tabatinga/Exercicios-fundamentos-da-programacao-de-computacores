/*********************************************************************************************************

Calcular o fatorial de x

*********************************************************************************************************/

#include <stdio.h>

int fatorial(int x)
{
    if (x == 0)
        return 1;
    else
        return x * fatorial(x - 1);
}

int main()
{
    int x;
    printf("\nFATORIAL DE X\n\n");
    printf("Digite X: ");
    scanf("%d", &x);
    printf("Resultado = %d\n", fatorial(x));
}
