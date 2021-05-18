/*********************************************************************************************************

Faça um algoritmo que calcule e escreva a soma dos 20 primeiros números da série:
100/0! + 99/1! + 98/2! + 97/3! + ... + 1/99!

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    double divisao, dividendo, divisor, fat;
    double soma = 0;
    int i;
    setlocale(LC_ALL,"portuguese");
    for(i = 0; i < 15; i++)
    {
        dividendo = 100 - i;
        //teste printf("dividendo = %.2lf\n", dividendo);
        fat = i;
        //teste printf("fat = %.2lf\n", fat);
        for(divisor = 1; fat > 1; fat--)
            divisor *= fat;
        //teste printf("divisor = %.2lf\n", divisor);
        if(i != 0)
            soma = soma + dividendo / divisor;
        //teste printf("soma = %.2lf\n\n", soma);
    }
    printf("\nSoma da equacao = %.2lf.\n", soma);
    return 0;
}
