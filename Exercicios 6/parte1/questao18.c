/*********************************************************************************************************

Crie uma sub-rotina que gere e mostre os três primeiros números primos acima de 100.

*********************************************************************************************************/

#include <stdio.h>

void primos()
{
    int n, result, primo;
    n = 100;
    primo = 0;
    do
    {
        result = 0;
        n++;
        for (int i = 2; i <= n/2; i++)
        {
            if (n % i == 0)
            {
                result++;
            }
        }
        if(result == 0)
        {
            printf("\n%d", n);
            primo++;
        }
    }
    while(primo<3);
}

int main()
{
    printf("\nPrimeiros numeros primos maior que 100.\n");
    primos();
    return 0;
}
