/*********************************************************************************************************

Fa�a um programa que receba v�rias idades, calcule e mostre a m�dia das idades digitadas. Finalize di-
gitando idade igual a zero.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    printf("Descubra a idade media.\n");

    int i, idade, somaidade, pessoas, media;

    i = pessoas = somaidade = 0;

    printf("Digite as idades e depois de terminar, digite 0.\n");

    do
    {
        scanf("%d", &idade);

        if(idade == 0)
            i = 1;
        else
        {
            somaidade = somaidade + idade;
            pessoas++;
        }
        fflush(stdin);
    }
    while(i == 0);

    media = somaidade / pessoas;
    printf("A media das idades � %d.", media);

    return 0;

}
