/*********************************************************************************************************

Fa�a um programa que apresente o menu de op��es a seguir:
Menu de op��es:
1. M�dia aritm�tica
2. M�dia ponderada
3. Sair
Digite a op��o desejada.
Na op��o 1: receber duas notas, calcular e mostrar a m�dia aritm�tica.
Na op��o 2: receber tr�s notas e seus respectivos pesos, calcular e mostrar a m�dia ponderada.
Na op��o 3: sair do programa.
Verifique a possibilidade de op��o inv�lida. Nesse caso, o programa dever� mostrar uma mensagem.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int menu;
    double notaA, notaB, notaC, media, pesoA, pesoB, pesoC;

    printf("Escolha estre as seguintes op��es:\n1. M�dia aritm�tica\n2. M�dia ponderada\n3. Sair\n");

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
            printf("A m�dia aritm�tica �: %.2lf", media);
            break;
        case 2:
            printf("Digite tres notas e depois seus pesos:");
            scanf("%lf %lf %lf %d %d %d", &notaA, &notaB, &notaC, &pesoA, &pesoB, &pesoC);
            media = (notaA*pesoA + notaB*pesoB + notaC*pesoC) / (pesoA + pesoB + pesoC);
            printf("A m�dia ponderada �: %.2lf", media);
            break;
        case 3:
            return 0;
            break;
        default:
            printf("Opc�o inv�lida.");
            return 0;
            break;
    }
    return 0;

}
