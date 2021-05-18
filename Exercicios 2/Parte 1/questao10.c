/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("De acordo com o custo de fábrica de um carro, descubra o preço ao consumidor.\n");
    
    float fabrica;
    double final;
    
    //input
    
    printf("Digite o valor de fabrica do carro: ");
    scanf("%f", &fabrica);
    
    //calculo
    
    if(fabrica > 25000)
    {
        final = fabrica * 1.15 + fabrica * 0.2;
    }
    else if(fabrica > 12000)
    {
        final = fabrica * 1.1 + fabrica * 0.15;
    }
    else
    {
        final = fabrica * 1.05;
    }
    
    //output
    
    printf("O valor final ao consumidor é de R$%.2f.", final);

    return 0;
}
