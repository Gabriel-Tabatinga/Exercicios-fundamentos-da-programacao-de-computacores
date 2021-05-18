/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Descubra a media ponderada de suas 3 ultimas notas \n");
    
    //input
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    
    printf("Digite as 3 notas e depois seus respectivos pesos: ");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    
    //calculo
    double media;
    media = ((a * d) + (b * e) + (c * f)) / (d + e + f);
    
    //output
    printf("A media ponderada é %.2f", media);

    return 0;
}
