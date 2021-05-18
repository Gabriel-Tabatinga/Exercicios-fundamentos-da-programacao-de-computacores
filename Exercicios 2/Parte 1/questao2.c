/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Descubra a media das notas e receba o feedback de aprovação\n");
    
    float a, b;
    double media;
    //input
    
    printf("Digite as 2 notas: ");
    scanf("%f %f", &a, &b);
    
    //calculo
    media = (a + b) / 2;
    
    //output
    
    printf("A media das notas é %.2f\n", media);
    
    if(media >= 7)
    {
        printf("Aprovado");
    }
    else if(media >= 3)
    {
        printf("Exame");
    }
    else
    {
        printf("Reprovado");
    }

    return 0;
}
