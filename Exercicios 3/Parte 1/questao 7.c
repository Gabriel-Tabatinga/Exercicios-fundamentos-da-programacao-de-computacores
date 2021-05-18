/*********************************************************************************************************

Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
■ a quantidade de pessoas com idade superior a 50 anos;
■ a média das alturas das pessoas com idade entre 10 e 20 anos;
■ a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int i, idade, mais50, numpess, inferior40;
    double altura, peso, somaalt, mediaalt, porcentpeso;

    mais50 = numpess = inferior40 = 0;

    for(i = 1; i<=5; i++)
    {
        printf("\nDigite a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        fflush(stdin);
        printf("\nDigite a altura em centimetros da pessoa %d: ", i);
        scanf("%lf", &altura);
        fflush(stdin);
        printf("\nDigite o peso da pessoa em kg %d: ", i);
        scanf("%lf", &peso);
        fflush(stdin);

        if(idade > 50)
        {
            mais50++;
        }
        else if((idade > 10) && (idade < 20))
        {
            numpess = numpess + 1;
            somaalt = somaalt + altura;
        }
        if(peso < 40)
            inferior40 = inferior40 + 1;
    }

    mediaalt = somaalt / numpess;
    porcentpeso = 100 * inferior40 / 5;

    printf("\nA quantidade de pessoas com idade superior a 50 anos é: %d.\n", mais50);
    printf("A média das alturas das pessoas com idade entre 10 e 20 anos é: %.2lf centimetros.\n", mediaalt);
    printf("A porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas é: %.2lf porcento.\n", porcentpeso);

    return 0;
}
