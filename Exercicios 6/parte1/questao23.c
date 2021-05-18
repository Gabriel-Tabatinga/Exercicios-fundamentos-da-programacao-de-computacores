/*********************************************************************************************************

Crie um programa que receba três valores (obrigatoriamente maiores que zero), representando as medi-
das dos três lados de um triângulo.

Elabore sub-rotinas para:
. determinar se esses lados formam um triângulo (sabe-se que, para ser triângulo, a medida de um
lado qualquer deve ser inferior ou igual à soma das medidas dos outros dois).

. determinar e mostrar o tipo de triângulo (equilátero, isósceles ou escaleno), caso as medidas for-
mem um triângulo.

Todas as mensagens deverão ser mostradas no programa principal.

*********************************************************************************************************/

#include <stdio.h>
#include <math.h>

float formamTriangulo(float a, float b, float c)
{
    int triangulo = 0; // 0 -> false   1 -> true
    if((a + b >= c)||(a + c >= b)||(b + c >= a))
    {
        triangulo = 1;
    }
    return triangulo;
}
/*********************
Equilatero: 3 lados iguais
Isosceles: 2 lados iguais
Escaleno: 3 lados diferentes
********************/
int tipoTriangulo(float a, float b, float c)
{
    int tipo; //1 -> Equilatero   2 -> Isosceles   3 -> Escaleno
    if(a == b && a == c)
        tipo = 1;
    else if((a == b)||(a == c)||(b == c))
        tipo = 2;
    else
        tipo = 3;
    return tipo;
}

int main()
{
    float a, b, c;
    int triangulo, tipo, flag = 1;
    do{
        printf("\nDigite tres lados de um triangulo: ");
        scanf("%f %f %f", &a, &b, &c);
        if((a > 0)&&(b > 0)&&(c > 0))
            flag = 0;
        else
            printf("\nValor invalido para um ou mais lados.\n");
    }
    while(flag);
    triangulo = formamTriangulo(a, b, c);
    if(triangulo == 1)
    {
        tipo = tipoTriangulo(a, b, c);
        printf("\n\nOs 3 lados formam um triangulo");
        switch(tipo)
        {
            case 1:
                printf("\nFormam um triangulo equilatero.\n");
                break;
            case 2:
                printf("\nFormam um triangulo isosceles.\n");
                break;
            case 3:
                printf("\nFormam um triangulo escaleno.\n");
                break;
        }
    }
    else
        printf("Os 3 lados nao formam um triangulo"\n);
    return 0;
}
