/*********************************************************************************************************

Faça funções para:
1- Calcular e retornar o enésimo termo de uma progressão aritmética onde o primeiro termo e a
razão são informados pelo usuário.
2- Calcular e retornar também a soma dos n primeiros termos desta progressão (veja ex. 1).

3- Calcular e retornar o enésimo termo de uma progressão geométrica onde o primeiro termo e a
razão são informados pelo usuário.
4- Calcular e retornar também a soma dos n primeiros termos desta progressão (veja ex. 3).

5- Calcular e retornar a soma e o produto (faça funções separadas) dos dígitos de um número inteiro
informado pelo usuário.

6- Calcular e retornar (uma função para cada) as seguintes conversões de um valor n informado pelo
usuário: Polegada para centímetros; Centímetros para polegadas (1 polegada = 2,54 cm);
Fahrenheit para Celsius; e Celsius para Fahrenheit (𝐶º = (𝐹º − 32)/1,8 e 𝐹º = (𝐶º ∗ 1,8) + 32).

7- Calcular e exibir (faça aqui um procedimento) todos os números primos entre 1 e n, onde n é
informado pelo usuário. Para isto utilize a estratégias do Crivo de Eratóstenes.

8- Calcular e retornar o máximo divisor comum entre dois números informados pelo usuário a partir
do algoritmo de Euclides.

*********************************************************************************************************/

/*********************************************************************************************************

Faça novamente todas as funções da parte II, porém aqui você deve modificar as funções para
procedimentos e trabalhar com passagem de parâmetros por referência. Você deve exibir o valor das
variáveis de retorno antes e depois da chamada do procedimento. Veja exemplo explicado em sala de
aula.

**********************************************************************************************************/

#include <stdio.h>
#include <math.h>

int menu()
{
    int menu;
    printf("\nDigite o numero de acordo com a lista a seguir: \n1. Enesimo termo de uma progressao aritmetica e a soma dos n primeiros termos desta progressao.\n2. Enesimo termo de uma progressao geometrica e a soma dos n primeiros termos desta progressao.\n3. Soma e o produto dos digitos de um numero inteiro.\n4. Conversoes de Polegada para Centimetros, Centimetros para Polegada, Fahrenheit para Celsius e Celsius para Fahrenheit.\n5. Todos os numeros primos entre 1 e n.\n6. Maximo divisor comum entre dois numeros.\n");
    printf("Opcao: ");
    scanf("%d", &menu);
    fflush(stdin);
    return menu;
}

float progressaoAritmetica(float n, float razao)
{
    double enesimo;
    for(int i = 1; i <= 19; i++)
    {
        enesimo = n + (razao * i);
    }
    return enesimo;
}

float somaAritmetica(float n, float razao)
{
    double somaEnesimo;
    for(int i = 1; i <= 19; i++)
    {
        somaEnesimo += n + (razao * i);
    }
    return somaEnesimo;
}

float progressaoGeometrica(float n, float razao)
{
    double enesimo;
    enesimo = (n * pow(razao,19));
    return enesimo;
}

float somaGeometrica(float n, float razao)
{
    double soma;
    soma = ((n*(pow(razao,19) - 1))/(razao-1));
    return soma;
}

int somaDigitos(int num)
{
    int soma = 0;
    while (num != 0)
    {
        soma += num % 10;
        num = num / 10;
    }
    return soma;
}

int produtoDigitos(int num)
{
    int mult = 1;
    while (num != 0)
    {
        mult *= num % 10;
        num = num / 10;
    }
    return mult;
}

float conversaoPoCe(float polegada)
{
    //1 polegada = 2,54 cm
    float centimetros;
    centimetros = polegada * 2.54;
    return centimetros;
}

float conversaoCePo(float centimetros)
{
    float polegada;
    polegada = centimetros / 2.54;
    return polegada;
}

float conversaoFaCe(float fahre)
{
    //𝐶º = (𝐹º − 32)/1,8 e 𝐹º = (𝐶º ∗ 1,8) + 32
    float celsius;
    celsius = (fahre - 32) / 1.8;
    return celsius;
}

float conversaoCeFa(float celsius)
{
    float fahre;
    fahre = ((celsius * 1.8) + 32);
    return fahre;
}

int calculoPrimo(int n, int vetor[])
{
    printf("\nNumeros primos: ");
    int i,j;
    for (i = 2; i <= n; i++)
        vetor[i] = 1;
    i = 2;
    while (i * i <= n)
    {
        for (j=i+1; j<=n; j++)
            if (vetor[j]!=0 && j % i ==0)
                vetor[j] = 0;
        for (j = i + 1; vetor[j] == 0 && j <= n; j++);
        i = j;
    }
    return i;
}

int mdc(int a, int b)
{
    int aux;
    while(b != 0)
    {
        aux = a % b;
        a = b;
        b = aux;
    }
    return a;
}

int main()
{
    int opcao, flag = 0, flagconversao;
    float n, razao;
    int num, numA;
    int opcaoconversao;
    int vetor[10000];
    int i;
    do
    {
        opcao = menu();
        switch(opcao)
        {
            case 1:
                printf("\nPROGRESSAO ARITMETICA\nDigite o primeiro termo: ");
                scanf("%f", &n);
                fflush(stdin);
                printf("Digite a razao: ");
                scanf("%f", &razao);
                fflush(stdin);
                printf("Enesimo termo na posicao 19 = %lf.", progressaoAritmetica(n, razao));
                printf("\nSoma dos enesimos termos ate a posicao 19 = %lf.\n", somaAritmetica(n, razao));
                break;
            case 2:
                printf("\nPROGRESSAO GEOMETRICA\nDigite o primeiro termo: ");
                scanf("%f", &n);
                fflush(stdin);
                printf("Digite a razao: ");
                scanf("%f", &razao);
                fflush(stdin);
                printf("Enesimo termo na posicao 19 = %lf.", progressaoGeometrica(n, razao));
                printf("\nSoma dos enesimos termos ate a posicao 19 = %lf.\n", somaGeometrica(n, razao));
                break;
            case 3:
                printf("\nSOMA E PRODUTO DOS DIGITOS\nDigite o numero: ");
                scanf("%d", &num);
                fflush(stdin);
                printf("\nSoma dos digitos = %d", somaDigitos(num));
                printf("\nMultiplicacao dos digitos = %d\n", produtoDigitos(num));
                break;
            case 4:
                printf("\nCONVERSOES\nQual realizar? \n1. Polegada para centimetros\n2. Centimetros para polegada\n3. Fahrenheit para Celsius\n4. Celsius para Fahrenheit\n");
                do
                {
                    scanf("%d", &opcaoconversao);
                    flagconversao = 0;
                    switch(opcaoconversao)
                    {
                        case 1:
                            printf("\nPOLEGADA PARA CENTIMETRO\nDigite a polegada: ");
                            scanf("%f", &n);
                            fflush(stdin);
                            printf("\n%.2f polegadas = %.2f centimetros", n, conversaoPoCe(n));
                            break;
                        case 2:
                            printf("\nCENTIMETRO PARA POLEGADA\nDigite o centimetro: ");
                            scanf("%f", &n);
                            fflush(stdin);
                            printf("\n%.2f centimetros = %.2f polegadas", n, conversaoCePo(n));
                            break;
                        case 3:
                            printf("\nFAHRENHEIT PARA CELSIUS\nDigite o fahrenheit: ");
                            scanf("%f", &n);
                            fflush(stdin);
                            printf("\n%.2f fahrenheits = %.2f celsius", n, conversaoFaCe(n));
                            break;
                        case 4:
                            printf("\nCEUSIUS PARA FAHRENHEIT\nDigite o ceusius: ");
                            scanf("%f", &n);
                            fflush(stdin);
                            printf("\n%.2f celsius = %.2f fahrenheits", n, conversaoCeFa(n));
                            break;
                        default:
                            flagconversao = 1;
                            printf("\nValor invalido.\n");
                            break;
                    }
                }
                while(flagconversao == 1);
                break;
            case 5:
                printf("\nPRIMOS\nDigite o numero maximo: ");
                scanf("%d", &num);
                fflush(stdin);
                i = calculoPrimo(num, vetor);
                for (i = 2; i <= num; i++)
                {
                    if (vetor[i] != 0)
                        printf ("%d ", i);
                }
                break;
            case 6:
                printf("\nMAXIMO DIVISOR COMUM\nDigite o primeiro numero: ");
                scanf("%d", &num);
                fflush(stdin);
                printf("Digite o segundo numero: ");
                scanf("%d", &numA);
                fflush(stdin);
                printf("mdc = %d", mdc(num, numA));
                break;
            default:
                flag = 1;
                printf("\nValor invalido.\n");
                break;
        }
    }
    while(flag);
    printf("\n");
    return 0;
}
