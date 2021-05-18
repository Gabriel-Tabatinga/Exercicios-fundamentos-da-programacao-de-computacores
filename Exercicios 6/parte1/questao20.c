/*********************************************************************************************************

A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o sal�rio e o
n�mero de filhos. Fa�a uma sub-rotina que leia esses dados para um n�mero n�o determinado de pessoas
e retorne a m�dia de sal�rio da popula��o, a m�dia do n�mero de filhos, o maior sal�rio e o percentual
de pessoas com sal�rio inferior a R$ 380,00.

*********************************************************************************************************/

#include <stdio.h>

void dados()
{
    int flag = 1;
    double filhos, pessoas;
    double salario;
    double somaSalario, mediaSalario, somaFilho, mediaFilho, maiorSalario, somaInferior, percentualInferior;
    pessoas = somaFilho = somaInferior = somaSalario = 0;
    do
    {
        printf("\nSalario: ");
        scanf("%lf", &salario);
        fflush(stdin);
        if(salario >= 0)
        {
            if(pessoas == 0)
            {
                maiorSalario = salario;
            }
            printf("Numero de filhos: ");
            scanf("%lf", &filhos);
            fflush(stdin);
            pessoas += 1;
            somaSalario += salario;
            somaFilho += filhos;
            if(salario > maiorSalario)
                maiorSalario = salario;
            if(salario < 380)
                somaInferior++;
        }
        else
            flag = 0;
    }
    while(flag);
    //fim da coleta de dados e inicio calculos.
    mediaSalario = somaSalario / pessoas;
    mediaFilho = filhos / pessoas;
    percentualInferior = 100 * somaInferior / pessoas;

    printf("%lf %lf", filhos, pessoas);
    //output
    printf("\n\nMedia de salarios: %.2lf", mediaSalario);
    printf("\nMedia de filhos: %.2lf", mediaFilho);
    printf("\nMaior salario: %.2lf", maiorSalario);
    printf("\nPercentual de pessoas com salario inferior a R$ 380,00: %.2lf%%\n", percentualInferior);
}
int main()
{
    printf("\nDados coletados da pesquisa.\nDigite um salario negativo para encerrar a coleta de dados.\n");
    dados();
    return 0;
}
