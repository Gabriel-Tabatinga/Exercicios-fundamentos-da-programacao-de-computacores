/*********************************************************************************************************

Fa�a um programa que apresente o menu de op��es a seguir, que permita ao usu�rio escolher a op��o
desejada, receba os dados necess�rios para executar a opera��o e mostre o resultado. Verifique a possibi-
lidade de op��o inv�lida e n�o se preocupe com as restri��es como sal�rio inv�lido.

Menu de op��es:
1. Novo sal�rio
2. F�rias
3. D�cimo terceiro
4. Sair
Digite a op��o desejada.

Na op��o 1: receber o sal�rio de um funcion�rio, calcular e mostrar o novo sal�rio usando as regras a se-
guir:

SAL�RIOS PERCENTAGEM DE AUMENTO
At� R$ 210,00 15%
De R$ 210,00 a R$ 600,00 (inclusive) 10%
Acima de R$ 600,00 5%

Na op��o 2: receber o sal�rio de um funcion�rio, calcular e mostrar o valor de suas f�rias. Sabe-se que as
f�rias equivalem a seu sal�rio acrescido de um ter�o do sal�rio.
Na op��o 3: receber o sal�rio de um funcion�rio e o n�mero de meses de trabalho na empresa, no m�ximo
doze, calcular e mostrar o valor do d�cimo terceiro. Sabe-se que o d�cimo terceiro equivale a seu sal�rio
multiplicado pelo n�mero de meses de trabalho dividido por 12.
Na op��o 4: sair do programa.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int menu, meses;
    double salario;

    printf("Selecione a opcao no menu a seguir: \n\nMenu de op��es:\n1. Novo sal�rio\n2. F�rias\n3. D�cimo terceiro\n4. Sair");

    printf("\n\nDigite a opcao desejada: ");
    scanf("%d", &menu);

    switch(menu)
    {
        case 1:
            printf("Digite seu salario atual: ");
            scanf("%lf", &salario);
            if(salario>600)
                salario *= 1.05;
            else if(salario>210)
                salario *= 1.10;
            else
                salario *= 1.15;
            printf("O novo salario � R$%.2lf.", salario);
            break;
        case 2:
            printf("Digite seu salario: ");
            scanf("%lf", &salario);
            salario = salario * 1.3333333333333333333333333333333333333333333333;
            printf("O salario nas ferias sera de R$%.2lf.", salario);
            break;
        case 3:
            printf("Digite seu salario: ");
            scanf("%lf", &salario);
            printf("Digite o numero de meses trabalhando nessa empresa (maximo 12): ");
            scanf("%d", &meses);
            salario = salario * meses / 12;
            printf("O decimo terceiro sera %.2lf", salario);
            break;
        case 4:
            return 0;
            break;
        default:
            printf("\nCodigo invalido.");
            return 0;
            break;
    }
    return 0;
}
