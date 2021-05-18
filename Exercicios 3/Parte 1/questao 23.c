/*********************************************************************************************************

Faça um programa que apresente o menu de opções a seguir, que permita ao usuário escolher a opção
desejada, receba os dados necessários para executar a operação e mostre o resultado. Verifique a possibi-
lidade de opção inválida e não se preocupe com as restrições como salário inválido.

Menu de opções:
1. Novo salário
2. Férias
3. Décimo terceiro
4. Sair
Digite a opção desejada.

Na opção 1: receber o salário de um funcionário, calcular e mostrar o novo salário usando as regras a se-
guir:

SALÁRIOS PERCENTAGEM DE AUMENTO
Até R$ 210,00 15%
De R$ 210,00 a R$ 600,00 (inclusive) 10%
Acima de R$ 600,00 5%

Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor de suas férias. Sabe-se que as
férias equivalem a seu salário acrescido de um terço do salário.
Na opção 3: receber o salário de um funcionário e o número de meses de trabalho na empresa, no máximo
doze, calcular e mostrar o valor do décimo terceiro. Sabe-se que o décimo terceiro equivale a seu salário
multiplicado pelo número de meses de trabalho dividido por 12.
Na opção 4: sair do programa.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int menu, meses;
    double salario;

    printf("Selecione a opcao no menu a seguir: \n\nMenu de opções:\n1. Novo salário\n2. Férias\n3. Décimo terceiro\n4. Sair");

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
            printf("O novo salario é R$%.2lf.", salario);
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
