/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Descubra a soma de 4 números \n");
    
    //input
    
    int a;
    int b;
    int c;
    int d;
    
    printf("Digite 4 números para descobrir sua soma: ");
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    //calculo
    double soma;
    soma = a + b + c + d;
    
    //output
    printf("A soma de %d, %d, %d e %d é %.2f", a, b, c, d, soma);

    return 0;
}
