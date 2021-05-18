/*********************************************************************************************************

Faça  um  algoritmo  para  ler  um  valor  X  (validar  para  aceitar  apenas  valores  entre  1  [inclusive]  e  10 [inclusive]). Escrever a tabuada de X.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int n, aux;
    printf("\nDigite um valor entre 1 e 10, para descobrir sua tabuada.\n\n");
    scanf("%d", &n);
    if((n>=1) && (n<=10))
        for(int i = 0; i <= 10; i++)
        {
            aux = i * n;
            printf("%d x %d = %d\n", n, i, aux);
        }
    else
        printf("\nValor invalido.\n");
    return 0;
}
