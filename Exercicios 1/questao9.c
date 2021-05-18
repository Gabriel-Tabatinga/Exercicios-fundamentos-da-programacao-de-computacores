/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    printf("Descubra a area de um circulo \n");
    
    //input
    
    int a;
    
    printf("Digite o raio: ");
    scanf("%d", &a);
    
    //calculo
    double area;
    area = a * a *  M_PI;
    
    //output
    printf("A area desse circulo é %.4f", area);

    return 0;
}
