/*********************************************************************************************************

Faça um programa que receba o valor de um carro e mostre uma tabela com os seguintes dados: preço
final, quantidade de parcelas e valor da parcela. Considere o seguinte:
■ o preço final para compra à vista tem desconto de 20%;
■ a quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60; e
■ os percentuais de acréscimo encontram-se na tabela a seguir.

QUANTIDADE     PERCENTUAL DE ACRÉSCIMO
DE PARCELAS    SOBRE O PREÇO FINAL
6                 3%
12                6%
18                9%
24                12%
30                15%
36                18%
42                21%
48                24%
54                27%
60                30%

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int i, parcela;
    double valor, porcentagem, total, valorparcela;

    porcentagem = parcela = total = valorparcela = 0;

    printf("Descubra o valor final de um carro.\n");
    printf("Digite o valor inicial do carro: ");
    scanf("%lf", &valor);

    printf("O valor total a vista é R$ %.2lf.\n", valor * 0.8);

    for(i = 1; i <= 10; i++)
    {
        porcentagem = (1 + (0.03 * i));
        parcela = 6 * i;
        total = valor * porcentagem;
        valorparcela = total / parcela;
        printf("Com %d parcelas o valor da parcela é %.2lf e o valor total é %.2lf.\n", parcela, valorparcela, total);
    }

    return 0;
}
