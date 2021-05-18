/*********************************************************************************************************

Crie uma sub-rotina que receba como parâmetro a altura (alt) e o sexo de uma pessoa e retorne seu peso ideal.
Para homens, deverá calcular o peso ideal usando a fórmula: peso ideal = 72.7 *alt − 58;
para mulheres: peso ideal = 62.1 *alt − 44.7.

*********************************************************************************************************/

#include <stdio.h>

int homem(double alt)
{
    double ideal;
    ideal = (72.7 * alt) - 58;
    printf("%lf %lf", alt, ideal);
    return ideal;
}
int mulher(double alt)
{
    double ideal;
    ideal = (62.1 * alt) - 44.7;
    return ideal;
}
int main()
{
    double alt;
    int ideal;
    char sexo;

    printf("\nDescubra seu peso ideal.\n\nDigite sua altura: ");
    scanf("%alt", &alt);
    fflush(stdin);
    printf("Digite seu sexo, sendo m para masculino e f para feminino: ");
    scanf("%c", &sexo);
    switch(sexo)
    {
        case 'm':
            ideal = homem(alt);
            break;
        case 'f':
            ideal = mulher(alt);
            break;
        default:
            printf("\nLetra invalida para sexo.\n");
            return 0;
            break;
    }
    printf("\n\nPeso ideal = %.2lf.\n", ideal);
    return 0;
}
