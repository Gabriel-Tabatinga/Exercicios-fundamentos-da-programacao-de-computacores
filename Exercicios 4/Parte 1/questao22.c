/*********************************************************************************************************

Um  posto  de  combustíveis  deseja  determinar  qual  de  seus  produtos  tem  a  preferência  de  seus clientes.
Faça um  algoritmo  para  ler  o  tipo  de  combustível  abastecido  (codificado  da  seguinte  forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim).
Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser  solicitado  um  novo  código  (até  que  seja  válido).
Ao  ser informado  o  código  do  combustível,  o  seu respectivo nome deve ser impresso na tela.
O programa será encerrado quando o código informado for o número  4  escrevendo  então  a  mensagem  :  "MUITO  OBRIGADO"  e  a  quantidade  de  clientes  que abasteceram cada tipo de combustível.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int flag = 1;
    int cod, alcool, gasolina, diesel;
    alcool = gasolina = diesel = 0;
    printf("\nDigite o codigo do tipo  de  combustível  abastecido de acordo com o menu a seguir: \n1.Álcool \n2.Gasolina \n3.Diesel \n4.Fim\n\n");
    do
    {
        printf("\nCodigo: ");
        scanf("%d", &cod);
        fflush(stdin);
        switch(cod)
        {
            case 1:
                printf("Combustivel Álcool selecionado.\n");
                alcool++;
                break;
            case 2:
                printf("Combustivel Gasolina selecionado.\n");
                gasolina++;
                break;
            case 3:
                printf("Combustivel Diesel selecionado.\n");
                diesel++;
                break;
            case 4:
                printf("MUITO  OBRIGADO.\n");
                flag = 0;
                break;
            default:
                printf("\nCodigo invalido");
                break;
        }
    }
    while(flag);

    printf("\nA quantidade de cliente que abasteceu de acordo com cada tipo de combustivel:\nÁlcool: %d.\nGasolina: %d.\nDiesel: %d\n", alcool, gasolina, diesel);

    return 0;
}
