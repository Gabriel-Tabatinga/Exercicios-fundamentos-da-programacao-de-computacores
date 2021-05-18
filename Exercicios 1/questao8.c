/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Descubra a área de um triângulo isósceles \n");
    
    //input
    
    int b;
    int h;
    
    printf("Digite o tamanho da base e da altura: ");
    scanf("%d %d", &b, &h);
    
    //calculo
    double area;
    area = (b * h) / 2;
    
    //output
    printf("A área do triângulo é %.2f", area);

    return 0;
}
