/*********************************************************************************************************

Fa�a um algoritmo para repetir a leitura de um n�mero enquanto o valor fornecido for diferente de 0.
Para  cada  n�mero  fornecido,  imprimir  se  ele  �  NEGATIVO  ou  POSITIVO.
Quando  o  n�mero  0  for fornecido   a   repeti��o   deve   ser   encerrada   sem   imprimir   mensagem   alguma.
Use   a   estrutura FA�A/ENQUANTO

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    printf("\nDescubra se um numero � positivo ou negativo.\nObs: Digite o valor 0 para encerrar a repeti��o.\n");

    int flag = 0;
    float n;
    do
    {
        printf("\nDigite um valor:");
        scanf("%f", &n);
        fflush(stdin);
        if(n != 0)
        {
            if(n>0)
                printf("O numero digitado � positivo.\n");
            else
                printf("O numero digitado � negativo.\n");
        }
        else
            flag = 1;
    }
    while(flag == 0);
    return 0;
}
