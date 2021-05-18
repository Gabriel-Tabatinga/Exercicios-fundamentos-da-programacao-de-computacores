/*********************************************************************************************************

Uma ag�ncia banc�ria possui v�rios clientes que podem fazer investimentos com rendimentos mensais,
conforme a tabela a seguir:

TIPO DESCRI��O RENDIMENTO MENSAL
1 Poupan�a 1,5%
2 Poupan�a plus 2%
3 Fundos de renda fixa 4%

Fa�a um programa que leia o c�digo do cliente, o tipo do investimento e o valor investido, e que calcule
e mostre o rendimento mensal de acordo com o tipo do investimento. No final, o programa dever� mostrar
o total investido e o total de juros pagos.
A leitura terminar� quando o c�digo do cliente digitado for menor ou igual a 0.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    double juros, total, investimento, investido;
    int codigo, menu;

    investido = 0;

    printf("Agencia bancaria.\n\nDigite seu codigo de cliente: ");
    scanf("%d", &codigo);
    fflush(stdin);
    if(codigo > 0)
    {
        printf("Escolha o tipo de investimento de acordo com a tabela.\n\nTIPO DESCRI��O RENDIMENTO MENSAL\n1 Poupan�a 1,5%%\n2 Poupan�a plus 2%%\n3 Fundos de renda fixa 4%%\n");
        scanf("%d", &menu);
        fflush(stdin);
        printf("Digite o valor do investimento: ");
        scanf("%lf", &investimento);
        fflush(stdin);
        switch(menu)
        {
            case 1:
                juros = 0.015;
                total = total + (investimento * juros);
                investido += investimento;
                break;
            case 2:
                juros = 0.02;
                total = total + (investimento * juros);
                investido += investimento;
                break;
            case 3:
                juros = 0.04;
                total = total + (investimento * juros);
                investido += investimento;
                break;
            default:
                printf("Tipo de rendimento invalido.\n\n");
                return 0;
                break;
        }
    }
    else
        return 0;

    printf("\n\nO total investido foi %.2lf e o total de juros � %.2lf.\n\n", investido, total);

}
