/*********************************************************************************************************

Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba
o código e o valor de quinze transações, calcule e mostre:
■ o valor total das compras à vista;
■ o valor total das compras a prazo;
■ o valor total das compras efetuadas; e
■ o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //variaveis
    char codigo;
    int transacao, vista, prazo;
    float valor, totalvista, totalprazo, valortotal, valortotalprestacao;

    printf("Descubra o valor total das compras à vista, a prazo, valor total e valor da primeira prestação das compras a prazo juntas em 15 transações.\n");

    transacao = 1;
    while(transacao <= 15)
    {
        printf("Digite o codigo v para a vista e p para a prazo: ");
        scanf("%c", &codigo);
        fflush(stdin);
        if(codigo == 'v')
        {
            vista++;
            printf("Digite o valor da transação %d: ", transacao);
            scanf("%f", &valor);
            totalvista = totalvista + valor;
        }
        else if(codigo == 'p')
        {
            prazo++;
            printf("Digite o valor da transação %d: ", transacao);
            scanf("%f", &valor);
            totalprazo = totalprazo + valor;
        }
        transacao++;
        fflush(stdin);
    }

    valortotal = totalvista + totalprazo;
    valortotalprestacao = totalprazo / 3;

    printf("\nO valor total das compras à vista é: %f.", totalvista);
    printf("\nO valor total das compras a prazo é: %f.", totalprazo);
    printf("\nO valor total das compras efetuadas é: %f.", valortotal);
    printf("\nO valor da primeira prestação das compras a prazo juntas é: %f.", valortotalprestacao);

    return 0;
}
