/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Soma e a média de 3 números \n");
    
    //input
    
    int a;
    int b;
    int c;
    
    printf("Digite 3 números inteiros: ");
    
    scanf("%d %d %d", &a, &b, &c);
    
    //calculo
    double media;
    double soma;
    
    soma = a + b + c;
    media = soma/3.0;
    
    //output
    printf("A soma de %d, %d e %d é %.2f e sua média é %.2f", a, b, c, soma, media);

    return 0;
}
