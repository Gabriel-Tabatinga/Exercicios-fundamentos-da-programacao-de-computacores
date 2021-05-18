/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Descubra quanto de prêmio um funcionario irá receber de natal da empresa.\n");
    
    int extra, falta, h, premio;
    
    //input
    printf("Digite a quantidade de hora extra no trabalho: ");
    scanf("%d", &extra);
    printf("Agora digite a quantidade de horas faltas no trabalho: ");
    scanf("%d", &falta);
    
    //calculo
    h = extra - (2/3 * falta);
    
    if(h >= 2400)
    {
        premio = 500;
    }
    else if(h > 1800)
    {
        premio = 400;
    }
    else if(h >= 1200)
    {
        premio = 300;
    }
    else if(h >= 600)
    {
        premio = 200;
    }
    else
    {
        premio = 100;
    }
    
    //output
    printf("O valor do prêmio é R$%d.", premio);

    return 0;
}
