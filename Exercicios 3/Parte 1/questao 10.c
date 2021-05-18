/*********************************************************************************************************

Faça um programa que receba dez números, calcule e mostre a soma dos números pares e a soma dos números primos.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int numero, i, somapar, somaprimo, calprimo, pr;

    somapar = somaprimo = 0;

    printf("Descubra a soma dos números pares e a soma dos números primos.\n");


    for(i = 1; i <= 10; i++)
    {
        printf("Digite um dos 10 numeros: ");
        scanf("%d", &numero);
        fflush(stdin);

        if(numero % 2 == 0)
            somapar+= numero;

        pr = 0;
        for(calprimo = 2; calprimo < numero; calprimo++)
        {
            if(numero % calprimo == 0)
                pr++;
        }
        if((pr == 0) && (numero != 1))
            somaprimo+= numero;
    }
    printf("A soma dos numeros pares é %d e dos numeros primos é %d.", somapar, somaprimo);

    return 0;
}
