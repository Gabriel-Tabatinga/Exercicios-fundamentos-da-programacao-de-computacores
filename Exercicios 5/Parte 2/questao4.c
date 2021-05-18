/*********************************************************************************************************

Faça uma sub-rotina que receba como parâmetro o raio de uma esfera, calcule e mostre no programa principal
o seu volume: v = 4/3 * R3.

*********************************************************************************************************/

#include <stdio.h>
#include <math.h>

int subrotina(double raio)
{
    double volume;
    volume = pow(raio, 3) * 4 / 3;
    return volume;
}
int main()
{
    double volume;
    printf("\nDigite o raio de uma esfera para descobrir seu volume: ");
    scanf("%lf", &volume);
    volume = subrotina(volume);
    printf("\nVolume = %.2lf", volume);
    return 0;
}
