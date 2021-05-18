/*********************************************************************************************************

Crie uma sub-rotina que receba três números inteiros como parâmetros, representando horas, minutos e se-
gundos, e os converta em segundos. Exemplo: 2h, 40min e 10s correspondem a 9.610 segundos.

*********************************************************************************************************/

#include <stdio.h>

int subrotina(int h, int m, int s)
{
    int total;
    h *= 3600;
    m *= 60;
    total = h + m + s;
    return total;
}
int main()
{
    int h, m, s, total;
    printf("\nDigite a hora, minuto e segundo.\n");
    scanf("%d %d %d", &h, &m, &s);
    total = subrotina(h, m, s);
    printf("\n\nTotal em segundos: %d.\n", total);
    return 0;
}
