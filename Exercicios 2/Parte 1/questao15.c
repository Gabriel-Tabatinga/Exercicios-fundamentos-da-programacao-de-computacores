/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Descubra o rendimento de seu investimento.\n");
    
    float valor;
    double final;
    int tipo;
    
    //input
    
    printf("Digite a quantia que foi investido: ");
    scanf("%f", &valor);
    printf("Agora digite o numero do tipo de investimento\n Digite 1 para: Poupança\n Digite 2 para: Fundos de renda fixa\n");
    scanf("%d", &tipo);
    
    //calculo e output
    
    if(tipo == 1)
    {
        final = valor * 1.03;
        printf("Seu montante após 1 mês será de %.2f", final);
    }
    else if(tipo == 2)
    {
        final = valor * 1.04;
        printf("Seu montante após 1 mês será de %.2f", final);
    }
    else
    {
        printf("Erro na seleção do investimento");
    }

    return 0;
}
