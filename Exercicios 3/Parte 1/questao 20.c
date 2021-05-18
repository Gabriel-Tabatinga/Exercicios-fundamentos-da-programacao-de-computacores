/*********************************************************************************************************

Faça um programa que apresente o menu de opções a seguir:
Menu de opções:
1. Média aritmética
2. Média ponderada
3. Sair
Digite a opção desejada.
Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
Na opção 3: sair do programa.
Verifique a possibilidade de opção inválida. Nesse caso, o programa deverá mostrar uma mensagem.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int menu;
    double notaA, notaB, notaC, media, pesoA, pesoB, pesoC;

    printf("Escolha estre as seguintes opções:\n1. Média aritmética\n2. Média ponderada\n3. Sair\n");

    scanf("%d", &menu);
    fflush(stdin);

    switch(menu)
    {
        case 1:
            printf("Digite duas notas: ");
            scanf("%lf", &notaA);
            fflush(stdin);
            scanf("%lf", &notaB);
            fflush(stdin);
            media = (notaA + notaB) / 2;
            printf("A média aritmética é: %.2lf", media);
            break;
        case 2:
            printf("Digite tres notas e depois seus pesos:");
            scanf("%lf %lf %lf %d %d %d", &notaA, &notaB, &notaC, &pesoA, &pesoB, &pesoC);
            media = (notaA*pesoA + notaB*pesoB + notaC*pesoC) / (pesoA + pesoB + pesoC);
            printf("A média ponderada é: %.2lf", media);
            break;
        case 3:
            return 0;
            break;
        default:
            printf("Opcão inválida.");
            return 0;
            break;
    }
    return 0;

}
