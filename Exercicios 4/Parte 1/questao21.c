/*********************************************************************************************************

Fa�a um algoritmo para repetir a leitura de uma senha at� que ela seja v�lida.
Para cada leitura da senha  incorreta  informada  escrever  a  mensagem  "SENHA  INV�LIDA".
Quando  a  senha  for  informada corretamente deve ser impressa a mensagem "ACESSO PERMITIDO" e o algoritmo deve  ser encerrado.
Considere que a senha correta � o valor 1234.

*********************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int senha, flag = 1;
    do
    {
        printf("\nDigita a senha: ");
        scanf("%d", &senha);
        fflush(stdin);
        if(senha == 1234)
        {
            printf("\n\nACESSO PERMITIDO\n");
            flag = 0;
        }
        else
            printf("\n\nSENHA  INV�LIDA\n\n");
    }
    while(flag);
    return 0;
}
