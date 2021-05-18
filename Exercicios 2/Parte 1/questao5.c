/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Escolha dois numeros e realize operação com eles\n");
    
    float a, b;
    int c, um, dois, tres, quatro;
    
    //input
    
    printf("Digite os dois numeros: ");
    scanf("%f %f", &a, &b);
    
    printf("Agora escolha entre as seguintes operações: \n Digite 1 para: Média entre os números digitados. \n Digite 2 para: Diferença do maior pelo menor. \n Digite 3 para: Produto entre os números digitados. \n Digite 4 para: Divisão do primeiro pelo segundo.\n");
    scanf("%d", &c);
    
    //calculo
    
    um = (a + b) / 2;
    
    //if da operacao 2
    if(a > b)
    {
        dois = a - b;
    }
    else if(b > a)
    {
        dois = b - a;
    }
    else
    {
        dois = 0;
    }
    
    tres = a * b;
    quatro = a / b;
    
    //output e if
    
    if(c == 1)
    {
        printf("Média: %d", um);
    }
    else if(c == 2)
    {
        printf("Diferença: %d", dois);
    }
    else if(c == 3)
    {
        printf("Produto: %d", tres);
    }
    else if(c == 4)
    {
        printf("Divisão; %d", quatro);
    }
    else
    {
        printf("Valor digitado inválido");
    }

    return 0;
}
