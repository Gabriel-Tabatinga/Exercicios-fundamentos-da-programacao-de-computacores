/*********************************************************************************************************

Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo pro-
duto lançado. Para isso, forneceu o sexo do entrevistado e sua resposta (S — sim; ou N — não).

Sabe-se que foram entrevistadas dez pessoas. Faça um programa que calcule e mostre:

■ o número de pessoas que responderam sim;
■ o número de pessoas que responderam não;
■ o número de mulheres que responderam sim; e
■ a percentagem de homens que responderam não, entre todos os homens analisados.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    char resposta, sexo;
    int i, numsim, numnao, simsexow, naosexom, numhom, porcentagem;

    numsim = numnao = simsexow = naosexom = numhom = 0;

    printf("Programa para calcular e mostrar resultados de uma pesquisa de mercado.\n");

    for(i = 1; i <= 10; i++)
    {
        printf("Digite m se o sexo for masculino e w se o sexo por feminino: ");
        scanf("%c", &sexo);
        fflush(stdin);
        printf("Digite s se a pessoa gostou do novo produto e n caso não: ");
        scanf("%c", &resposta);
        fflush(stdin);

        if(resposta == 's')

            numsim++;
        else if(resposta == 'n')
            numnao++;
        if(sexo == 'w')
            if(resposta == 's')
                simsexow++;
        if(sexo == 'm')
        {
            numhom++;
            if(resposta == 'n')
                naosexom++;
        }
    }

    porcentagem = 100 * naosexom / numhom;

    printf("O número de pessoas que responderam sim é %d.\n", numsim);
    printf("O número de pessoas que responderam não é %d.\n", numnao);
    printf("O número de mulheres que responderam sim é %d.\n", simsexow);
    printf("A percentagem de homens que responderam não, entre todos os homens analisados é %d%%.\n", porcentagem);

    return 0;

}
