/*********************************************************************************************************

O  Matem�tico  Italiano  Leonardo  de  Pisa  nasceu  na  It�lia  por  volta  de  1175  e ficou  conhecido  comoFibonacci  (filho  de  Bonaccio).
A  partir  da  publica��o  do  livro  Liber  Abacci  ,  (livro  do  �baco)  em  1202, Fibonacci tornou-se famoso, principalmente  devido aos in�meros temas desenvolvidos nesse trabalho.
Nele aparecem estudos sobre o cl�ssico problema envolvendo popula��es de coelhos, o qual foi abase para o estabelecimento da c�lebre sequ�ncia (n�meros) de Fibonacci.
Esta sequ�ncia � constitu�da recursivamente da seguinte forma:Fn+2= Fn+1+ Fn, n > 0, F0= 1 e F1= 1
Ap�s  uma  an�lise  cuidadosa  dessa  sequ�ncia  percebe-se  que  ela  det�m muitas  belas  propriedades,observa-se isso, j� na sua forma recursiva, entretanto, ela aparece envolvida tamb�m nas aplica��es em Bot�nica (no crescimento de folhas),
em Computa��o (na vida �til de componentes computacionais)e em Estat�stica.
Um exemplo da s�rie de Fibonacci pode ser visto abaixo:
F = 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, ...
Neste laborat�rio de hoje, dado um n�mero L > 0 entrado pelo usu�rio, fa�a um programa que imprima os L primeiros elementos da s�rie de Fibonacci.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int L, valor;
    long int a = 1;
    long int b = 1;
    double c;

    printf("Digite um numero para aplicar a quantidade de elementos na estrutura de fibonacci: ");
    scanf("%d", &L);
    fflush(stdin);

    printf("\n\nSERIE FIBONACCI COM %d ELEMENTOS\n1\n1\n", L);

    for(valor = 2; valor < L; valor++)
    {
        c = a + b;
        printf("%.0lf\n", c);
        a = b;
        b = c;
    }
    return 0;
}
