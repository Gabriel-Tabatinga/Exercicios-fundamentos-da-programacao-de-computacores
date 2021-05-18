/*********************************************************************************************************

Faça uma função recursiva para verificarse uma palavra é palíndromo (Ex. aba, abcba).

*********************************************************************************************************/

#include <stdio.h>
#include<string.h>

int inverte (char *n, int y, int aux) {

    if (y <= aux)
        return 1;
    else
    {
        if (n[y] != n[aux])
            return 0;
        return inverte(n, y-1, aux+1);
    }
}

void palindromo (char *n) {
    int aux1, x = 0;
    aux1 = inverte(n, strlen(n), x);
    if (aux1 == 1)
        printf("Eh palindromo");
    else
        printf("Nao eh palindromo");
 }


 int main()
 {
    char A[30] = {"aba"};
    palindromo(A);
    printf("\n");
    char B[30] = {"abcba"};
    return 0;
 }
