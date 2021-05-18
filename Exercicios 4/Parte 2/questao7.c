/*********************************************************************************************************

Faça um algoritmo que receba diversos pares de números A e B entrados pelo usuário, e
determine a soma dos cubos de todos os números pares inteiros compreendidos no intervalo entre B e A.
Retorne o intervalo pesquisado e o valor da soma calculada.
a entrada de dados deverá ser interrompida quando A e B forem iguais a zero

*********************************************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, soma;

    a = b = 1; //Para o while funcionar na primeira tentativa.

    while(a != 0 || b != 0)
    {
        printf("\nDigite o valor de A e B respectivamente: \nObs: De os valor de A e B como 0 para encerrar a entrada de dados.\n");
        scanf("%lf %lf", &a, &b);
        soma = 0;
        if(a > b)
        {
            for(int i = a; i > b; i--)
            {
                if(i % 2 == 0)
                    soma = soma + (pow(i, 3));
            }
        }
        else if(b > a)
        {
            for(int i = b; i > a; i--)
            {
                if(i % 2 == 0)
                    soma = soma + (pow(i, 3));
            }
        }
        if(a != 0 || b != 0)
            printf("\n\nIntervalo = %.2lf, %.2lf.\nSoma = %2.lf\n", a, b, soma);
    }
    if((a == 0) && (b == 0))
        return 0;
}
