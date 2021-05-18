/*********************************************************************************************************

Um  comerciante  deseja  fazer  o  levantamento  do  lucro  das  mercadorias  que  ele  comercializa.
Para isto, mandou digitar uma linha para cada mercadoria com o código, preço de compra e preço de venda delas.
Faça um algoritmo que determine e escreva quantas mercadorias proporcionam lucro < 10%, 10% ≤ lucro ≤ 20% e lucro > 20%.
Determine também e escreva o valor total de compra e de venda de todas as mercadorias, assim como o lucro total.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int flag, codigo, qtdlucromenor, qtdlucroentre, qtdlucromaior;
    double compra, venda, totalcompra, totalvenda, lucro, totallucro, porcentlucro;

    flag = totalcompra = totalvenda = qtdlucromenor = qtdlucroentre = qtdlucromaior = 0;

    printf("\nDescubra o lucro dos produtos de um comerciante.\nObs:Digite o codigo como 0 para encerrar.");
    do
    {
        printf("\n\nDigite o codigo, o preço de compra e o preço de venda: ");
        scanf("%d", &codigo);
        fflush(stdin);
        if(codigo != 0)
        {
            scanf("%lf %lf", &compra, &venda);
            fflush(stdin);
            totalcompra += compra;
            totalvenda += venda;
            lucro = venda - compra;
            totallucro += lucro;
            porcentlucro = 100 * (venda / compra - 1);
            if(porcentlucro > 20)
                qtdlucromaior++;
            else if(porcentlucro >= 10)
                qtdlucroentre++;
            else
                qtdlucromenor++;
        }
        else
            flag++;
    }
    while(flag == 0);

    printf("\nA quantidade de mercadoria que proporcionam:\nMais de 20%%lucro é: %d\nEntre 10%% e 20%% é: %d\nMenos de 10%% é: %d\n", qtdlucromaior, qtdlucroentre, qtdlucromenor);
    printf("\nO valor total de compra é: %.2lf. \nO valor total de venda é: %.2f. \nO lucro total é: %.2f\n", totalcompra, totalvenda, totallucro);
    return 0;
}
