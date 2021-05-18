/*********************************************************************************************************

Foi feita uma pesquisa sobre a audiência de canal de TV em várias casas de uma cidade, em determinado
dia. Para cada casa consultada foi fornecido o número do canal (4, 5, 7, 12) e o número de pessoas que
estavam assistindo àquele canal. Se a televisão estivesse desligada, nada era anotado, ou seja, essa casa
não entrava na pesquisa. Faça um programa que:

■ leia um número indeterminado de dados (número do canal e número de pessoas que estavam as-
sistindo); e

■ calcule e mostre a porcentagem de audiência de cada canal.

Para encerrar a entrada de dados, digite o número do canal ZERO.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    printf("Audiencia do canal de televisao.\n");
    int i, canal, pessoas, pessoas4, pessoas5, pessoas7, pessoas12, totalpessoas;
    double porcentagem;

    pessoas4 = pessoas5 = pessoas7 = pessoas12 = i = 0;

    do
    {
        printf("\nDigite o numero do canal(4, 5, 7, 12) e depois o numero de pessoas assistindo. \nObs: Digite valor pro canal 0 para encerrar a entrada de dado.\n");
        scanf("%d %d", &canal, &pessoas);
        fflush(stdin);
        if(canal != 0)
            switch(canal)
            {
                case 4:
                    pessoas4 = pessoas4 + pessoas;
                    break;
                case 5:
                    pessoas5 = pessoas5 + pessoas;
                    break;
                case 7:
                    pessoas7 = pessoas7 + pessoas;
                    break;
                case 12:
                    pessoas12 = pessoas12 + pessoas;
                    break;
                default:
                    printf("\nValor invalido para canal");
                    break;
            }
        else
        i = 1;
    }
    while(i==0);

    totalpessoas = pessoas4 + pessoas5 + pessoas7 + pessoas12;
    porcentagem = 100 * pessoas4 / totalpessoas;
    printf("\nA porcentagem de audiencia do canal 4 é %.2lf%%.\n", porcentagem);
    porcentagem = 100 * pessoas5 / totalpessoas;
    printf("\nA porcentagem de audiencia do canal 6 é %.2lf%%.\n", porcentagem);
    porcentagem = 100 * pessoas7 / totalpessoas;
    printf("\nA porcentagem de audiencia do canal 7 é %.2lf%%.\n", porcentagem);
    porcentagem = 100 * pessoas12 / totalpessoas;
    printf("\nA porcentagem de audiencia do canal 12 é %.2lf%%.\n", porcentagem);


    return 0;

}
