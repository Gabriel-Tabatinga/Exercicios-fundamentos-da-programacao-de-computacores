/*********************************************************************************************************

Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código.
Os códigos utilizados são:

1, 2, 3, 4 Votos para os respectivos candidatos
5 Voto nulo
6 Voto em branco

Faça um programa que calcule e mostre:
■ o total de votos para cada candidato;
■ o total de votos nulos;
■ o total de votos em branco;
■ a porcentagem de votos nulos sobre o total de votos; e
■ a porcentagem de votos em branco sobre o total de votos.
Para finalizar o conjunto de votos, tem-se o valor zero e, para códigos inválidos, o programa deverá
mostrar uma mensagem.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int i, candidatoA, candidatoB, candidatoC, candidatoD, nulo, branco, total, codigo;
    double porcentagem;

    candidatoA = candidatoB = candidatoC = candidatoD = nulo = branco = 0;

    printf("\nTabela de codigos para votacao:\n1, 2, 3, 4 Votos para os respectivos candidatos\n5 Voto nulo\n6 Voto em branco\n0 para finalizar o conjunto de votos\n\n");
    do
    {
        printf("Digite o codigo do candidato: ");
        scanf("%d", &codigo);
        fflush(stdin);
        switch(codigo)
        {
            case 1:
                candidatoA++;
                break;
            case 2:
                candidatoB++;
                break;
            case 3:
                candidatoC++;
                break;
            case 4:
                candidatoD++;
                break;
            case 5:
                nulo++;
                break;
            case 6:
                branco++;
                break;
            case 0:
                i = 1;
                break;
            default:
                printf("Codigo invalido.\n");
                break;
        }
    }
    while(i==0);

    printf("\nO total de votos para o candidato 1 é %d.\nO total de votos para o candidato 2 é %d.\nO total de votos para o candidato 3 é %d.\nO total de votos para o candidato 4 é %d.\n", candidatoA, candidatoB, candidatoC, candidatoD);
    printf("O total de votos nulos é %d.\n", nulo);
    printf("O total de votos em branco é %d.\n", branco);

    total = candidatoA + candidatoB + candidatoC + candidatoD + branco + nulo;

    porcentagem = 100 * nulo / total;
    printf("A porcentagem de votos nulos sobre o total de votos é %.2lf%%.\n", porcentagem);

    porcentagem = 100 * branco / total;
    printf("A porcentagem de votos em branco sobre o total de votos é %.2lf%%.", porcentagem);

    return 0;
}
