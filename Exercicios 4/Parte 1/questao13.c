/*********************************************************************************************************

Ler 10 valores e contar quantos est�o no intervalo [10,20] e quantos deles est�o fora deste intervalo. Escrever o resultado das duas contagens.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int dentro = 0, fora = 0;
    float n;
    printf("\nDigite 10 valores e descubra quantos deles est�o entre 10 e 20. \n");

    for(int i = 1; i <= 10; i++)
    {
        printf("\nDigite o %d valor: ", i);
        scanf("%f", &n);
        fflush(stdin);
        if((n>10) && (n<20))
            dentro++;
        else
            fora++;
    }
    printf("\n\n%d est�o dentro do intervalo.\n%d est�o fora do intervalo.\n", dentro, fora);
    return 0;
}
