/*********************************************************************************************************

Fa�a um  algoritmo para ler dois valores inteiros e imprimir o resultado da divis�o do primeiro pelo segundo.
Se o segundo valor informado for ZERO, deve ser impressa uma mensagem de VALOR INV�LIDO e dever� ser lido um novo valor.
Ao final do programa deve ser impressa a seguinte mensagem: VOCE DESEJA  OUTRO  C�LCULO  (S/N)?.
Se  a  resposta  for  S  o  programa  dever�  retornar  ao  come�o,  caso contr�rio dever� encerrar a sua execu��o imprimindo quantos c�lculos foram feitos.
OBS: O programa s� dever� aceitar com a resposta para a pergunta as letras S ou N.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    double a, b, divisao;
    char repetir;
    int qtddivisao = 0;

    do
    {
        printf("\nDigite dois valores inteiros para realizar uma divis�o.\n");
        scanf("%lf %lf", &a, &b);
        fflush(stdin);
        if(b != 0)
        {
            divisao = a / b;
            printf("\n%.2lf / %.2lf = %.2lf\n", a, b, divisao);
            qtddivisao++;
            do
            {
                printf("\nVOCE DESEJA  OUTRO  C�LCULO  (S/N)\n");
                scanf("%c", &repetir);
                fflush(stdin);
            }
            while((repetir != 'S') && (repetir != 'N'));
        }
        else
        {
            repetir == 'S';
            printf("\nVALOR INVALIDO.\n");
        }
    }
    while(repetir == 'S');

    printf("\n\nForam realizadas %d calculos.\n", qtddivisao);
    return 0;
}
