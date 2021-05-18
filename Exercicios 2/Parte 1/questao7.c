/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Reajuste salario dos funcionarios de uma empresa caso seja infeior a R$500,00.\n");
    
    float salario, reajustado;
    
    //input
    
    printf("Digite a valor do salario do funcionario: ");
    scanf("%f", &salario);
    
    //calculo
    
    reajustado = salario * 1.3;
    
    //output
    
    if(salario < 500)
    {
        printf("Com o reajuste, o salario passará de %.2f para %.2f.", salario, reajustado);
    }
    else
    {
        printf("Você não receberá aumento.");
    }
    

    return 0;
}
