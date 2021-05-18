/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Escreva um número real e veja a parte inteira deste número \n");
    
    float x;
    int y;
    //input
    scanf("%f", &x);
    
    //calculo
    y = x;
    
    //output
    
    printf("A parte intera do numero é: %d", y);

    return 0;
}
