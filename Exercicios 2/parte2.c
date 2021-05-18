#include <stdio.h>

int main()
{
    printf("Descubra se um aluno foi aprovado.\n");
    
    int faltas, aulas;
    float total, notaA, notaB, notaC, notaexer, notareav, final;
    double frequencia;
    
    //input
    
    printf("Digite a quantidade de aulas no semestre e a quantidade de faltas: ");
    scanf("%d %d", &aulas, &faltas);
    printf("Digite a nota dos exercicios: ");
    scanf("%f", &notaexer);
    printf("Digite as 3 notas das avaliações: ");
    scanf("%f %f %f", &notaA, &notaB, &notaC);
    
    total = notaexer + notaA + notaB + notaC;
    
    //reavaliacao
    if(total < 60)
    {
        printf("Foi necessario uma reavaliação.\n Digite sua nota na reavaliação: ");
        scanf("%f", &notareav);
    }
    
    //calculo frequencia
    frequencia = 100 * (aulas - faltas) / aulas;
    
    //calculo nota final
    if(total >= 60)
    {
        final = total;
    }
    else
    {
        if(((notaA < notaB) && (notaA < notaC)) || ((notaA = notaB) || (notaA = notaC)))
        {
            final = notareav + notaB + notaC + notaexer;
        }
        else if(((notaB < notaA) && (notaB < notaC)) || (notaB = notaC))
        {
            final = notaA + notareav + notaC + notaexer;
        }
        else if((notaC < notaB) && (notaC < notaA))
        {
            final = notaA + notaB + notareav + notaexer;
        }
    }
    
    if(final >= 60)
    {
        if(frequencia >= 75)
        {
            printf("O aluno foi aprovado, com nota final %.2f e frequencia de %.2f porcento.", final, frequencia);
        }
        else
        {
            printf("O aluno foi reprovado, com nota final %.2f e frequencia de %.2f porcento.", final, frequencia);
        }
    }
    else
    {
        printf("O aluno foi reprovado, com nota final %.2f e frequencia de %.2f porcento.", final, frequencia);
    }

    return 0;
}
