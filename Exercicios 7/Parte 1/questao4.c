/*********************************************************************************************************

Calcular a soma dos dígitos de um número(ex.: 75 = 7 + 5 = 12)

*********************************************************************************************************/

#include <stdio.h>

int somaDigitos(int x)
{
    int a, b;
    a = x % 10;
    b = (x - a)/10;
    if(b<=0)
        return a;
    else
        return a + somaDigitos(b);
}

int main()
{
    int x;
    printf("\nSOMA DOS DIGITOS\n\n");
    printf("Digite o numero: ");
    scanf("%d", &x);
    printf("Soma dos digitos = %d\n", somaDigitos(x));
    return 0;
}
