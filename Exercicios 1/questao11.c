/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Descubra quanto do saco de ração de gato sobrará apos 5 dias da compra \n");
    
    int peso, quantidade, sobra;
    
    //input
    
    printf("Digite o peso do cada saco de ração em quilos e a quantidade que cada gato come em gramas por dia: ");
    scanf("%d %d", &peso, &quantidade);
    
    //calculo
    sobra = peso * 1000 - quantidade * 2 * 5;
    
    //output
    printf("A quantidade de ração que resta no saco é %d gramas.", sobra);

    return 0;
}
