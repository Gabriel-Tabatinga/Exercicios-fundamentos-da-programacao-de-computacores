/*********************************************************************************************************

O  Matemático  Italiano  Leonardo  de  Pisa  nasceu  na  Itália  por  volta  de  1175  e ficou  conhecido  comoFibonacci  (filho  de  Bonaccio).
A  partir  da  publicação  do  livro  Liber  Abacci  ,  (livro  do  Ábaco)  em  1202, Fibonacci tornou-se famoso, principalmente  devido aos inúmeros temas desenvolvidos nesse trabalho.
Nele aparecem estudos sobre o clássico problema envolvendo populações de coelhos, o qual foi abase para o estabelecimento da célebre sequência (números) de Fibonacci.
Esta sequência é constituída recursivamente da seguinte forma:Fn+2= Fn+1+ Fn, n > 0, F0= 1 e F1= 1
Após  uma  análise  cuidadosa  dessa  sequência  percebe-se  que  ela  detém muitas  belas  propriedades,observa-se isso, já na sua forma recursiva, entretanto, ela aparece envolvida também nas aplicações em Botânica (no crescimento de folhas),
em Computação (na vida útil de componentes computacionais)e em Estatística.
Um exemplo da série de Fibonacci pode ser visto abaixo:
F = 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, ...
Neste laboratório de hoje, dado um número L > 0 entrado pelo usuário, faça um programa que imprima os L primeiros elementos da série de Fibonacci.

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
