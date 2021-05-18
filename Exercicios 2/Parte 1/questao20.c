/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Descubra a categoria de um nadador a partir de sua idade.\n");
    
    int idade;
    
    //input
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    
    //output
    
    if(idade > 30)
    {
        printf("O nadador se encontra na categoria de Sênior.");
    }
    else if(idade > 16)
    {
        printf("O nadador se encontra na categoria de Adulto.");
    }
    else if(idade > 11)
    {
        printf("O nadador se encontra na categoria de Adolescente.");
    }
    else if(idade > 8)
    {
        printf("O nadador se encontra na categoria de Juvenil.");
    }
    else if(idade > 5)
    {
        printf("O nadador se encontra na categoria de Infantil.");
    }
    else
    {
        printf("O nadador possui menos de 5 anos e por isso não se encontra em uma categoria.");
    }

    return 0;
}
