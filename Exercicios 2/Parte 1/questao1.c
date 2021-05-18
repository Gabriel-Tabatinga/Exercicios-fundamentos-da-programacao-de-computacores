/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Descubra a media das notas do alunos e se ele foi aprovdo\n");
    
    float a, b, c, d;
    double media;
    
    //input
    printf("Digite as quatro notas desse aluno: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    
    //calculo
    media = (a + b + c + d) / 4;
    
    //output
    
    printf("A media foi de %.2f\n", media);
    
    if(media >= 7)
    {
        printf("aprovado");
    }
    else
    {
        printf("reprovado");
    }

    return 0;
}
