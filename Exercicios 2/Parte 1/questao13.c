/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Receba a preço de um produto e veja seu aumento e sua classificação. \n");
    
    int produto, final;
    
    //input
    
    printf("Digite o preço do produto: ");
    scanf("%d", &produto);
    
    //atualizacao do preco de acordo com a tabela
    
    if(produto > 100)
    {
        final = produto * 1.15;
    }
    else if(produto > 50)
    {
        final = produto * 1.1;
    }
    else
    {
        final = produto * 1.05;
    }
    
    //output
    
    if(final > 200)
    {
        printf("O novo preço será %d e sua classificação é muito caro.", final);
    }
    else if(final > 120)
    {
        printf("O novo preço será %d e sua classificação é caro.", final);
    }
    else if(final > 80)
    {
        printf("O novo preço será %d e sua classificação é normal.", final);
    }
    else
    {
        printf("O novo preço será %d e sua classificação é barato.", final);
    }

    return 0;
}
