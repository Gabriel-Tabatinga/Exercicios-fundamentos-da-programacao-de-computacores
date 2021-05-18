/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Descubra seu salario apos o reajuste.\n");
    
    float atual;
    double final;
    
    //input
    
    printf("Digite seu salario: ");
    scanf("%f", &atual);
    
    //calculo e output
    
    if(atual > 1000)
    {
        final = atual * 1.05;
    }
    else if(atual > 800)
    {
        final = atual * 1.1;
    }
    else if(atual > 700)
    {
        final = atual * 1.2;
    }
    else if(atual > 500)
    {
        final = atual * 1.3;
    }
    else if(atual > 300)
    {
        final = atual * 1.4;
    }
    else
    {
        final = atual * 1.5;
    }
    
    
    //output
    printf("O novo salario será de R$%.2f.", final);
    

    return 0;
}
