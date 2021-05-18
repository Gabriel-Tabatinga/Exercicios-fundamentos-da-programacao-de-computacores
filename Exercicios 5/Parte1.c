/*********************************************************************************************************

Desenvolva uma calculadora e implemente cada operação como um procedimento em seu programa.
Faça um menu interativo exibindo as opções para que o usuário escolha qual operação realizar. Após a
escolha do usuário, imprima na tela as instruções referentes a aquela operação. Ao finalizar a exibir o
resultado da operação, exiba novamente o menu de opções inicial. Uma das opções deve ser a opção para
inserir 0 (zero), para sair.
O seu programa deverá implementar as seguintes operações (cada uma em um procedimento diferente):
a) Soma
b) Subtração
c) Multiplicação
d) Divisão
e) Raiz quadrada
f) Potência
g) Seno
h) Cosseno
i) Hipotenusa de um triângulo retângulo
j) Tangente
k) Logaritmo
l) Area de um retângulo
m) Área de uma circunferência
n) Fatorial

*********************************************************************************************************/

#include <stdio.h>
#include <math.h>

void calculasoma(double a, double b)
{
    double soma;
    soma = a+b;
    printf("Soma = %.4lf", soma);
}
void calculasubtracao(double a, double b)
{
    double sub;
    sub = a-b;
    printf("Subtracao = %.4lf", sub);
}
void calculamultiplicacao(double a, double b)
{
    double mult;
    mult = a*b;
    printf("Mult = %.4lf", mult);
}
void calculadivisao(double a, double b)
{
    double div;
    div = a / b;
    printf("Divisao = %.4lf", div);
}
void calcularaiz(double a)
{
    double raiz;
    raiz = sqrt(a);
    printf("Raiz de %.4lf = %.4lf", a, raiz);
}
void calculapotencia(double a, double b)
{
    double potencia;
    potencia = pow(a, b);
    printf("Potencia = %.4lf", potencia);
}
void calculaseno(double a)
{
    double seno;
    seno = sin(a);
    printf("Seno de %.4lf = %.4lf", a, seno);
}
void calculacosseno(double a)
{
    double coss;
    coss = cos(a);
    printf("Cosseno de %.4lf = %.4lf", a, coss);
}
void calculahipotenusa(double a, double b)
{
    double hip;
    hip = pow(a, 2) + pow(b, 2);
    hip = sqrt(hip);
    printf("Hipotenusa = %.4lf", hip);
}
void calculatangente(double a)
{
    double tang;
    tang = tan(a);
    printf("Tangente = %.4lf", tang);
}
void calculalogaritmo(double a)
{
    double loga;
    loga = log10(a);
    printf("Logaritmo = %.4lf", loga);
}
void calculaarearetangulo(double a, double b)
{
    double area;
    area = a*b;
    printf("Area = %.4lf", area);
}
void calculaareacircunferencia(double a)
{
    double area;
    area = M_PI * pow(a, 2);
    printf("Area = %.4lf", area);
}
void calculafatorial(double a)
{
    double fat;
    for(fat = 1; a > 1; a--)
        fat *= a;
    printf("Fatorial de %.4lf = %.4lf", a, fat);
}
int main()
{
    char i;
    double a, b;
    printf("\nCalculadora");
    do{
        printf("\n\nDigite a operacao a ser realizada pela calculadora \na) Soma\nb) Subtração\nc) Multiplicação\nd) Divisão\ne) Raiz quadrada\nf) Potência\ng) Seno\nh) Cosseno\ni) Hipotenusa de um triângulo retângulo\nj) Tangente\nk) Logaritmo\nl) Area de um retângulo\nm) Área de uma circunferência\nn) Fatorial\n0) Sair\n\n");
        scanf("%c", &i);
        fflush(stdin);
        switch(i)
        {
            case 'a':
                printf("Realizando soma. \nDigite o primeiro valor: ");
                scanf("%lf", &a);
                fflush(stdin);
                printf("Digite o segundo valor: ");
                scanf("%lf", &b);
                fflush(stdin);
                calculasoma(a, b);
                break;
            case 'b':
                printf("Realizando subtracao.\nDigite o primeiro valor: ");
                scanf("%lf", &a);
                fflush(stdin);
                printf("Digite o segundo valor: ");
                scanf("%lf", &b);
                fflush(stdin);
                calculasubtracao(a, b);
                break;
            case 'c':
                printf("Realizando multiplicacao. \nDigite o primeiro valor: ");
                scanf("%lf", &a);
                fflush(stdin);
                printf("Digite o segundo valor: ");
                scanf("%lf", &b);
                fflush(stdin);
                calculamultiplicacao(a, b);
                break;
            case 'd':
                printf("Realizando divisao. \nDigite o primeiro valor: ");
                scanf("%lf", &a);
                fflush(stdin);
                printf("Digite o segundo valor: ");
                scanf("%lf", &b);
                fflush(stdin);
                calculadivisao(a, b);
                break;
            case 'e':
                printf("Realizando raiz. \nDigite o valor: ");
                scanf("%lf", &a);
                fflush(stdin);
                calcularaiz(a);
                break;
            case 'f':
                printf("Realizando potencia. \nDigite o primeiro valor: ");
                scanf("%lf", &a);
                fflush(stdin);
                printf("Digite o segundo valor: ");
                scanf("%lf", &b);
                fflush(stdin);
                calculapotencia(a, b);
                break;
            case 'g':
                printf("Realizando seno. \nDigite o angulo: ");
                scanf("%lf", &a);
                fflush(stdin);
                calculaseno(a);
                break;
            case 'h':
                printf("Realizando cosseno. \nDigite o angulo: ");
                scanf("%lf", &a);
                fflush(stdin);
                calculacosseno(a);
                break;
            case 'i':
                printf("Realizando hipotenusa de um triagulo retangulo. \nDigite o valor do primeiro lado: ");
                scanf("%lf", &a);
                fflush(stdin);
                printf("Digite o valor do segundo lado: ");
                scanf("%lf", &b);
                fflush(stdin);
                calculahipotenusa(a, b);
                break;
            case 'j':
                printf("Realizando tangente. \nDigite o valor: ");
                scanf("%lf", &a);
                fflush(stdin);
                calculatangente(a);
                break;
            case 'k':
                printf("Realizando logaritmo de base 10. \nDigite o valor: ");
                scanf("%lf", &a);
                fflush(stdin);
                calculalogaritmo(a);
                break;
            case 'l':
                printf("Realizando area de um retangulo. \nDigite o valor do primeiro lado: ");
                scanf("%lf", &a);
                fflush(stdin);
                printf("Digite o valor do segundo lado: ");
                scanf("%lf", &b);
                fflush(stdin);
                calculaarearetangulo(a, b);
                break;
            case 'm':
                printf("Realizando area de uma circunferencia. \nDigite o valor do raio: ");
                scanf("%lf", &a);
                fflush(stdin);
                calculaareacircunferencia(a);
                break;
            case 'n':
                printf("Realizando fatorial. \nDigite o valor: ");
                scanf("%lf", &a);
                fflush(stdin);
                calculafatorial(a);
                break;
            case '0':
                printf("\n\nEncerrando programa.\n");
                return 0;
                break;
            default:
                printf("\n\nValor invalido.");
                break;
        }
    }
    while(i != '0');
    return 0;
}
