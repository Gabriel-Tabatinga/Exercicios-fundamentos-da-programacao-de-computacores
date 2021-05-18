/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Use 3 numeros para descobrir o maior\n");
    
    float a, b, c;
    
    //input
    
    printf("Digite os 3 numeros: ");
    scanf("%f %f %f", &a, &b, &c);
    
    //output
    
    if((a > b) && (a > c))
    {
        printf("O maior numero é: %f", a);
    }
    else if(b > c)
    {
        printf("O maior numero é: %f", b);
    }
    else
    {
        printf("O maior numero é: %f", c);
    }

    return 0;
}
