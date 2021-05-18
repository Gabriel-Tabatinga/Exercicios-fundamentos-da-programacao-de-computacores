/*********************************************************************************************************

Faça um programa que receba um conjunto de valores inteiros e positivos, calcule e mostre o maior e o
menor valor do conjunto. Considere que:
■ para encerrar a entrada de dados, deve ser digitado o valor zero;
■ para valores negativos, deve ser enviada uma mensagem;
■ os valores negativos ou iguais a zero não entrarão nos cálculos.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int i, maior, menor, numero;
    i = 0;

    printf("Digite numeros inteiros e positivos:\nObs: Digite 0 para encerrar a entrada de numeros.\n\n");

    scanf("%d", &numero);
    maior = menor = numero;

    do
    {
        scanf("%d", &numero);
        fflush(stdin);
        if(numero == 0)
            i = 1;
        else if(numero != 0)
            if(numero < 0)
                printf("\nSomente numeros inteiros e positivos.\n\n");
            else if(numero > 0)
            {
                if(numero>maior)
                    maior = numero;
                if(numero<menor)
                    menor = numero;
            }
    }
    while(i==0);

    printf("Maior numero é %d.\n", maior);
    printf("Menor numero é %d.\n", menor);

    return 0;
}
