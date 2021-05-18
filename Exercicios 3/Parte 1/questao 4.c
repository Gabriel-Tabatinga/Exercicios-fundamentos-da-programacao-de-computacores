/***********************************************

Faça um programa que receba um número, calcule e mostre a tabuada desse número.
Exemplo:
Digite um número: 5
5 × 0 = 0
5 × 1 = 5
5 × 2 = 10
5 × 3 = 15
5 × 4 = 20
5 × 5 = 25
5 × 6 = 30
5 × 7 = 35
5 × 8 = 40
5 × 9 = 45
5 × 10 = 50

************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    printf("Descubra a tabuada de um número inteiro.\n");

    int n, i; // n = numero digitado, i = variavel para multiplicacao.
    int multip; //multiplicacao

    printf("Digite o número: ");
    scanf("%d", &n);

    //calculo
    i = 0;
    while(i < 11)
    {
        multip = n * i;
        printf("\n %d x %d = %d.", n, i, multip);
        i++;
    }


    return 0;


}
