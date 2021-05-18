/******************************************************************************

Faça um programa que receba a idade de oito pessoas, calcule e mostre:
a) a quantidade de pessoas em cada faixa etária;
b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas.
c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas

FAIXA ETÁRIA IDADE
1a Até 15 anos
2a De 16 a 30 anos
3a De 31 a 45 anos
4a De 46 a 60 anos
5a Acima de 60 anos

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    printf("Descubra a faixa etaria de 8 pessoas.\n");

    int idade; //Variavel da idade.
    int qntdpessoas; //variavel para selecionar a pessoa.
    int a1, a2, a3, a4, a5; //tabela da idade
    float porcentagem1, porcentagem2; //calculo porcentagem

    a1 = 0;
    a2 = 0;
    a3 = 0;
    a4 = 0;
    a5 = 0;

    for(qntdpessoas = 1;qntdpessoas < 9; qntdpessoas++)
    {
        printf("Digite a idade do %d: ", qntdpessoas);
        scanf("%d", &idade);
        fflush(stdin);

        if(idade > 60)
            a5++;
        else if(idade > 45)
            a4++;
        else if(idade > 30)
            a3++;
        else if(idade > 15)
            a2++;
        else
            a1++;
    }

    porcentagem1 = 100*a1/8;
    porcentagem2 = 100*a5/8;

    printf("A quantidade de pessoas na faixa etária até 15 anos é: %d.\n", a1);
    printf("A quantidade de pessoas na faixa etária de 16 a 30 anos é: %d.\n", a2);
    printf("A quantidade de pessoas na faixa etária de 31 a 45 anos é: %d.\n", a3);
    printf("A quantidade de pessoas na faixa etária de 46 a 60 anos é: %d.\n", a4);
    printf("A quantidade de pessoas na faixa etária acima de 60 anos é: %d.\n", a5);
    printf("A porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas é: %.2f porcento.\n", porcentagem1);
    printf("A porcentagem de pessoas na última faixa etária com relação ao total de pessoas é: %.2f porcento.", porcentagem2);

    return 0;
}
