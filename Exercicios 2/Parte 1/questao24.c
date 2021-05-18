/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Descubra o novo preço de um produto e sua classificação.\n");
    
    float preco;
    int categoria, situacao;
    double aumento, imposto, final;
    
    //input
    
    //preço
    printf("Digite o preço atual do produto: ");
    scanf("%f", &preco);
    
    //categoria
    printf("Selecione a categoria do produto seguindo o comando a seguir:\n Digite 1 para limpeza.\n Digite 2 para alimentação.\n Digite 3 para vestuário.\n");
    scanf("%d", &categoria);
    if((categoria > 3) || (categoria < 1))
    {
        printf("Valor incorreto para categoria.");
        return 0;
    }
    
    //situacao
    printf("Selecione a situação do produto seguindo o comando a seguir:\n Digite 1 para produtos que necessitam de refrigeração.\n Digite 2 para produtos que não necessitam de refrigeração.\n");
    scanf("%d", &situacao);
    if((situacao > 2) || (situacao < 1))
    {
        printf("Valor incorreto para situação.");
        return 0;
    }
    
    //calculo aumento
    if(preco > 25)
    {
        if(categoria == 1)
        {
            aumento = preco * 0.12;
        }
        else if(categoria == 2)
        {
            aumento = preco * 0.15;
        }
        else if(categoria == 3)
        {
            aumento = preco * 0.18;
        }
    }
    else if(preco <= 25)
    {
        if(categoria == 1)
        {
            aumento = preco * 0.05;
        }
        else if(categoria == 2)
        {
            aumento = preco * 0.08;
        }
        else if(categoria == 3)
        {
            aumento = preco * 0.10;
        }
    }
    
    //calculo imposto
    if((categoria == 2) || (situacao == 1))
    {
        imposto = preco * 0.05;
    }
    else
    {
        imposto = preco * 0.08;
    }
    
    //calculo final
    final = preco + aumento - imposto;
    
    //output c/ classificacao
    if(final >= 120)
    {
        printf("O novo preço é %.2f e sua classificação é Caro", final);
    }
    else if(final <= 50)
    {
        printf("O novo preço é %.2f e sua classificação é Barato", final);
    }
    else
    {
        printf("O novo preço é %.2f e sua classificação é Normal", final);
    }
    
    return 0;
}
