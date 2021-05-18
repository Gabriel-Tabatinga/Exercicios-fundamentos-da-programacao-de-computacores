/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int senha;
    //input
    printf("Digite a senha: ");
    scanf("%d", &senha);
    
    //output
    
    if(senha == 4531)
    {
        printf("Foi permitido o seu acesso.");
    }
    else
    {
        printf("Não foi permitido o seu acesso, tente novamente.");
    }

    return 0;
}
