/*********************************************************************************************************

Deseja-se fazer um levantamento a respeito da ausência de alunos à primeira prova de Fundamentos de Computação para cada uma das 14 turmas existentes.
Para cada turma, é fornecido um conjunto de valores, sendo que os dois primeiros valores do conjunto correspondem à identificação da turma (A, ou B, ou C, ...)
e ao número de alunos matriculados, e os demais valores deste conjunto contêm o número de matrícula do aluno e a letra A ou P para o caso de o aluno estar ausente ou presente, respectivamente.
Faça um algoritmo que, para cada turma, calcule a porcentagem de ausência e escreva a identificação da turma e a porcentagem calculada; determine e escreva quantas turmas tiveram porcentagem de ausência superior a 5%.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    char turma, presenca;
    int qtd, matricula, ausencia, maior5;
    float porcentagem;

    maior5 = 0;

    for(int i = 1; 1 <= 14; i++)
    {
        setlocale(LC_ALL,"portuguese");
        qtd = ausencia = porcentagem = 0;
        printf("\nDigita identificacao da turma por letra e a quantidade de alunos matriculados: ");
        scanf("%c %d", &turma, &qtd);
        fflush(stdin);
        printf("\nAgora adicione cada um dos alunos da turma %c com numero de matricula e presenca sendo A para ausente e P para presente.", turma);

        for(int j = 1; j <= qtd; j++)
        {
            printf("\n\nMatricula: ");
            scanf("%d", &matricula);
            fflush(stdin);
            printf("\nPresenca: ");
            scanf("%c", &presenca);
            fflush(stdin);
            if(presenca == 'A')
            {
                ausencia++;
            }
        }
        porcentagem = 100 * ausencia / qtd;
        if(porcentagem > 5)
            maior5++;
        printf("\n\nNa turma %c, a porcentagem de ausentes é %.2f", turma, porcentagem);
    }
    printf("\n\nA quantidade de turmas com ausencia maior que 5%% é %d.", maior5);
}
