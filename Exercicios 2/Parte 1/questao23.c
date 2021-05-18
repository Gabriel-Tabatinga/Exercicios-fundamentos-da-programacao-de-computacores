/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Descubra o preço final da compra de um produto.\n");
    
    int codigo, quantid, unid, bruto, desc, liq;
    
    //input
    
    printf("Digite o codigo do produto e a quantidade comprado: ");
    scanf("%d %d", &codigo, &quantid);
    
    //if codigo para descobrir valor unidade
    
    if((codigo > 40) || (codigo < 0))
    {
        printf("Codigo invalido.");
        return 0;
    }
    else if(codigo >= 31)
    {
        unid = 30;
    }
    else if(codigo >= 21)
    {
        unid = 20;
    }
    else if(codigo >= 11)
    {
        unid = 15;
    }
    else if(codigo >= 1)
    {
        unid = 10;
    }
    
    //calculos
    bruto = unid * quantid;
    if(bruto > 500)
    {
        desc = bruto * 0.15;
    }
    else if(bruto > 250)
    {
        desc = bruto * 0.10;
    }
    else
    {
        desc = bruto * 0.05;
    }
    
    liq = bruto - desc;
    
    //output
    printf("O preço unitário do produto comprado é %d.\nO preço total da nota é %d.\nO valor do desconto é %d.\nO preço final é %d", unid, bruto, desc, liq);

    return 0;
}
