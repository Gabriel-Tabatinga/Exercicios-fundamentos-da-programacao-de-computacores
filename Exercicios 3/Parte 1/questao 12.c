/*********************************************************************************************************

Faça um programa que receba dez números inteiros e mostre a quantidade de números primos dentre os
números que foram digitados.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int i, x, numero, somaprimo, calprimo;
    printf("Descubra dentre de 10 numeros quantos deles é primo.\n\n");
    printf("Digite os 10 numeros: ");

    for(i = 1; i <= 10; i++)
    {
        scanf("%d", &numero);
        fflush(stdin);
        x = 0;
        for(calprimo = 2; calprimo < numero; calprimo++)
        {
            if(numero % calprimo == 0)
                x++;
        }
        if((x == 0) && (numero != 1))
            somaprimo++;
    }

    printf("Existem %d numeros primos nessa sequencia.", somaprimo);

    return 0;
}
