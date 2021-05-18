/*********************************************************************************************************

Faça um algoritmo para repetir a leitura de um número enquanto o valor fornecido for diferente de 0.
Para  cada  número  fornecido,  imprimir  se  ele  é  NEGATIVO  ou  POSITIVO.
Quando  o  número  0  for fornecido   a   repetição   deve   ser   encerrada   sem   imprimir   mensagem   alguma.
Use   a   estrutura FAÇA/ENQUANTO

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    printf("\nDescubra se um numero é positivo ou negativo.\nObs: Digite o valor 0 para encerrar a repetição.\n");

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
                printf("O numero digitado é positivo.\n");
            else
                printf("O numero digitado é negativo.\n");
        }
        else
            flag = 1;
    }
    while(flag == 0);
    return 0;
}
