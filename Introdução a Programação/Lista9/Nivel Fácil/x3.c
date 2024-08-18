// 3.Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de
// retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.
#include <stdio.h>

// função que retorna o número se é positivo ou negativo
int verificaSeEhPositivoOuNegativo(int i)
{
    if (i < 0)
        return -1;

    if (i == 0)
        return 0;

    return 1;
}

// Função que vai imprimir se é positivo ou negativo!
void imprimeSeEhPositivoOuNegativo(int i)
{
    int numeroVerificado = verificaSeEhPositivoOuNegativo(i);

    switch (numeroVerificado)
    {
    case -1:
        printf("Esse número é negativo!!!!! \n");
        break;
    case 0:
        printf("Esse número é 0!!!!! \n");
        break;
    case 1:
        printf("Esse número é positivo!!!!! \n");
        break;
    default:
        printf("Numero inválido");
        break;
    }
}

int main()
{
    int numero = 0;
    printf("Me diga qual número você quer descobrir se é positivo ou negativo!\n");
    scanf("%i", &numero);

    imprimeSeEhPositivoOuNegativo(numero);

    return 0;
}