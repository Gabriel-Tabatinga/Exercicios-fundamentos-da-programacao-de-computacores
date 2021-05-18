/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    printf("Descubra a raiz quadrada de um número real \n");
    
    //input
    int a;
    
    printf("Digite o numero: ");
    
    scanf("%d", &a);
    
    //calculo
    double raiz;
    
    raiz = sqrt(a);
    
    //output
    printf("A raiz de %d é ±%.2f", a, raiz);
    

    return 0;
}
