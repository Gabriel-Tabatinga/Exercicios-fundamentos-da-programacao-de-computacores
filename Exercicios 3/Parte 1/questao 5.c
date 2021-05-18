/**********************

Faça um programa que mostre as tabuadas dos números de 1 a 10.

**********************/

#include <stdio.h>

int main()
{
    int i, a, multip;
    printf("Tabuada de 1 a 10.\n");

    for(a = 1; a < 11; a++)
    {
        i=0;
        while(i<11)
        {
            multip = a*i;
            printf("\n%d x %d = %d.", a, i, multip);
            i++;
        }
        printf("\n");
    }
    return 0;
}
