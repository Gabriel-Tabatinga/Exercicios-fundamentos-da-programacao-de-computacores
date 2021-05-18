/*********************************************************************************************************

Faça um  algoritmo para ler dois valores inteiros e imprimir o resultado da divisão do primeiro pelo segundo.
Se o segundo valor informado for ZERO, deve ser impressa uma mensagem de VALOR INVÂLIDO e deverá ser lido um novo valor.
Ao final do programa deve ser impressa a seguinte mensagem: VOCE DESEJA  OUTRO  CÁLCULO  (S/N)?.
Se  a  resposta  for  S  o  programa  deverá  retornar  ao  começo,  caso contrário deverá encerrar a sua execução imprimindo quantos cálculos foram feitos.
OBS: O programa só deverá aceitar com a resposta para a pergunta as letras S ou N.

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
        printf("\nDigite dois valores inteiros para realizar uma divisão.\n");
        scanf("%lf %lf", &a, &b);
        fflush(stdin);
        if(b != 0)
        {
            divisao = a / b;
            printf("\n%.2lf / %.2lf = %.2lf\n", a, b, divisao);
            qtddivisao++;
            do
            {
                printf("\nVOCE DESEJA  OUTRO  CÁLCULO  (S/N)\n");
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
