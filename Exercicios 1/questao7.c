/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Descubra o rendimento de um deposito \n");
    
    //input
    
    int a;
    int b;
    
    printf("Digite o valor do deposito e sua taxa de juros: ");
    scanf("%d %d", &a, &b);
    
    //calculo
    double rendimento;
    double liquido;
    rendimento = (a * b / 100);
    liquido = a + rendimento;
    
    //output
    printf("O rendimento de seu investimento sera de %.2f e o valor total sera de %.2f.", rendimento, liquido);

    return 0;
}
