/*********************************************************************************************************

Faça um programa que receba o tipo da ação, ou seja, uma letra a ser comercializada na bolsa de valores,
o preço de compra e o preço de venda de cada ação e que calcule e mostre:
■ o lucro de cada ação comercializada;
■ a quantidade de ações com lucro superior a R$ 1.000,00;
■ a quantidade de ações com lucro inferior a R$ 200,00;
■ o lucro total da empresa.
Finalize com o tipo de ação ‘F’.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    printf("Receba o tipo da ação, uma letra a ser comercializada na bolsa de valores, o preço de compra e o preço de venda de cada ação.\n\n");

    char acao;
    int i, acimamil, abaixoduzentos;
    float compra, venda, lucro, lucrototal;

    printf("Digite o tipo de ação com uma letra, o preço de compra e o preço de venda./nObs: Finalize com a letra F nas açoes.\n");

    i = acimamil = abaixoduzentos = lucro = lucrototal = 0;
    do
    {
        scanf("%c", &acao);
        fflush(stdin);

        if(acao == 'F')
            i = 1;
        else
        {
            scanf("%f", &compra);
            fflush(stdin);
            scanf("%f", &venda);
            fflush(stdin);
            lucro = venda - compra;
            printf("O lucro da ação %c foi de %.2f.\n", acao, lucro);
            if(lucro > 1000)
                acimamil++;
            if(lucro < 200)
                abaixoduzentos++;
            lucrototal = lucrototal + lucro;
        }
    }
    while(i == 0);

    printf("\nA quantidade de ações com lucro superior a R$ 1.000,00 é %d.\n", acimamil);
    printf("A quantidade de ações com lucro inferior a R$ 200,00 é %d.\n", abaixoduzentos);
    printf("O lucro total da empresa é R$%.2f.", lucrototal);

    return 0;


}
