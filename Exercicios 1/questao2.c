/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Reajuste de salário \n");
    
    //input
    
    int a;
    
    printf("Digite seu salário atual para descobrir o reajuste: ");
    
    scanf("%d", &a);
    
    //calculo
    double Reajuste;
    
    Reajuste = a * 1.1;
    
    //output
    printf("O novo valor do seu salario será de %.2f", Reajuste);
    

    return 0;
}
