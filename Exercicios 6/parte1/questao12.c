/*********************************************************************************************************

Crie uma sub-rotina que receba como parâmetro dois valores X e Z, calcule e retorne X^z
sem utilizar funções ou operadores de potência prontos.

*********************************************************************************************************/

#include <stdio.h>

void calculaExpoente(float x, float z)
{
    float resultado = 1;

    if(z > 0)
    {
        for(int i = 0; i < z; i++)
            resultado *= x;
    }
    else if(z < 0)
    {
        for(int i = 0; i < (-z); i++)
            resultado /= x;
    }
    printf("\n%.4lf", resultado);
}

int main()
{
    float x, z;
    float result;
    printf("\nDigite dois valores, sendo o primeiro elevado ao segundo: ");
    scanf("%f %f", &x, &z);
    calculaExpoente(x, z);
    return 0;
}
