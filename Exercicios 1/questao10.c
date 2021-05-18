/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Descubra sua idade em 2050 e atual \n");
    
    //input
    
    int nascimento, ano, atual, futuro;
    
    printf("Digite o ano de seu nascimento e o ano atual: ");
    scanf("%d %d", &nascimento, &ano);
    
    //calculo
    atual = ano - nascimento;
    futuro = 2050 - nascimento;
    
    //output
    printf("Você tem atualmente %d anos e terá %d em 2050", atual, futuro);

    return 0;
}
