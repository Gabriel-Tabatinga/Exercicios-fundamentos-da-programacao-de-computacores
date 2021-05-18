/*********************************************************************************************************

Um  posto  de  combust�veis  deseja  determinar  qual  de  seus  produtos  tem  a  prefer�ncia  de  seus clientes.
Fa�a um  algoritmo  para  ler  o  tipo  de  combust�vel  abastecido  (codificado  da  seguinte  forma: 1.�lcool 2.Gasolina 3.Diesel 4.Fim).
Caso o usu�rio informe um c�digo inv�lido (fora da faixa de 1 a 4) deve ser  solicitado  um  novo  c�digo  (at�  que  seja  v�lido).
Ao  ser informado  o  c�digo  do  combust�vel,  o  seu respectivo nome deve ser impresso na tela.
O programa ser� encerrado quando o c�digo informado for o n�mero  4  escrevendo  ent�o  a  mensagem  :  "MUITO  OBRIGADO"  e  a  quantidade  de  clientes  que abasteceram cada tipo de combust�vel.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int flag = 1;
    int cod, alcool, gasolina, diesel;
    alcool = gasolina = diesel = 0;
    printf("\nDigite o codigo do tipo  de  combust�vel  abastecido de acordo com o menu a seguir: \n1.�lcool \n2.Gasolina \n3.Diesel \n4.Fim\n\n");
    do
    {
        printf("\nCodigo: ");
        scanf("%d", &cod);
        fflush(stdin);
        switch(cod)
        {
            case 1:
                printf("Combustivel �lcool selecionado.\n");
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

    printf("\nA quantidade de cliente que abasteceu de acordo com cada tipo de combustivel:\n�lcool: %d.\nGasolina: %d.\nDiesel: %d\n", alcool, gasolina, diesel);

    return 0;
}
