/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Descubra seu salario líquido \n");
    
    //input
    
    int a;
    
    printf("Digite o valor do seu salario base: ");
    scanf("%d", &a);
    
    //calculo
    double salario;
    salario = (a * 1.05) - (a * 0.07); 
    
    //output
    printf("O seu salario líquido sera %.2f", salario);

    return 0;
}
