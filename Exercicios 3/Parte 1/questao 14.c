/*********************************************************************************************************

Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião

em relação ao filme: ótimo — 3; bom — 2; regular — 1. Faça um programa que receba a idade e a opi-
nião de quinze espectadores, calcule e mostre:

■ a média das idades das pessoas que responderam ótimo;
■ a quantidade de pessoas que responderam regular; e
■ a percentagem de pessoas que responderam bom, entre todos os espectadores analisados.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int i, idade, nota, somaidade, quantotimo, quantregular, quantbom;
    double media, porcentagem;

    somaidade = quantregular = quantbom = quantotimo = 0;


    for(i = 1; i <= 15; i++)
    {
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        fflush(stdin);
        printf("Digite a nota de 1 a 3 sabendo que ótimo — 3; bom — 2; regular — 1: ");
        scanf("%d", &nota);
        fflush(stdin);

        if(nota == 3)
        {
            somaidade = somaidade + idade;
            quantotimo++;
            media = somaidade / quantotimo;
        }
        else if(nota == 1)
            quantregular++;
        else if(nota == 2)
            quantbom++;
    }

    porcentagem = 100 * quantbom / i;

    printf("A média das idades das pessoas que responderam ótimo é: %.2lf.\n", media);
    printf("A quantidade de pessoas que responderam regular é: %d.\n", quantregular);
    printf("A percentagem de pessoas que responderam bom, entre todos os espectadores analisados é %.2lf%%.\n", porcentagem);

    return 0;

}
