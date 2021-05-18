/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    printf("Escreva dois números e execute uma das operações. \n");
    
    float a, b, um, doisA, doisB;
    int op;
    double tresA, tresB;
    
    //input
    
    printf("Digite os dois numeros: ");
    scanf("%f %f", &a, &b);
    
    printf("Agora escolha uma das seguintes operações: \n Digite 1 para: O primeiro número elevado ao segundo número.\n Digite 2 para: Raiz quadrada de cada um dos números.\n Digite 3 para: Raiz cúbica de cada um dos números.\n");
    scanf("%d", &op);
    
    //calculos
    
    um = pow(a,b);
    doisA = sqrt(a);
    doisB = sqrt(b);
    tresA = cbrt(a);
    tresB = cbrt(b);
    
    //Output
    
    if(op == 1)
    {
        printf("O primeiro número elevado ao segundo número é: %f", um);
    }
    else if(op == 2)
    {
        printf("A raiz quadrada de %f é %f e de %f é %f.", a, doisA, b, doisB);
    }
    else if(op == 3)
    {
        printf("A raiz cubica de %f é %f e de %f é %f.", a, tresA, b, tresB);
    }
    else
    {
        printf("Error, try again.");
    }
    

    return 0;
}
