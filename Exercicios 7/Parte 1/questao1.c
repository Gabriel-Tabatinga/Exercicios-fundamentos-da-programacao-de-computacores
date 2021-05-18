/*********************************************************************************************************

Calcular a potênciade x elevado a y

*********************************************************************************************************/

#include <stdio.h>

int potencia(int x, int y)
{
    if (y ==0)
        return 1;
    else
        return x * potencia(x,  y - 1);
}

int main()
{
    int x, y;
    printf("\nX ELEVADO A Y\n\n");
    printf("Digite x: ");
    scanf("%d", &x);
    printf("Digite y: ");
    scanf("%d", &y);
    printf("Resultado = %d\n", potencia(x, y));
    return 0;
}
