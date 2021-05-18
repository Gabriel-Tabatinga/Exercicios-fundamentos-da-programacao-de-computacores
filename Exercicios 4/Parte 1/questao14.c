/*********************************************************************************************************

Ler  o  número  de  alunos  existentes  em  uma  turma,  ler  as  notas  destes  alunos,  e  calcular  a  média aritmética destas notas.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int alunos;
    double nota, media = 0;

    printf("\nDigite a quantidade de alunos: ");
    scanf("%d", &alunos);

    for(int i = 1; i <= alunos; i++)
    {
        printf("\nDigite a nota do aluno %d: ", i);
        scanf("%lf", &nota);
        fflush(stdin);
        media += nota;
    }

    media = media / alunos;
    printf("\n\nA média das notas é %.2lf.\n", media);
    return 0;
}
