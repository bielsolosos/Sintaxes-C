#include <stdio.h>

//.Faça um programa com 2 funções, uma função será responsável por ler um número e garantir que
// esse número seja inteiro e positivo. A outra função identifica e imprime uma mensagem
// informando se o número é primo ou não.

// função que identifica se o número é inteiro e positivo:
// Fiz utilizando ponteiros pois se é positivo ele zera a variável, logo fazendo com que o caluclo já retorne que não é primo!
void ehPositivo(int *n)
{
    if (*n >= 0)
    {
        *n = *n;
    }
    else
    {
        *n = 0;
    }
}

// Deve ter um jeito mais bonito de fazer isso daqui mas segui o enunciado a risca!
void ehPrimo(int n)
{
    ehPositivo(&n);
    if (n == 0)
    {
        printf("não eh primo!\n");
        return;
    }
    if (n == 2)
    {
        printf("eh primo!\n");
        return;
    }
    if (n % 2 == 0)
    {
        printf("não eh primo!\n");
        return;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            printf("não eh primo!\n");
            return;
        }
    }
    printf("eh primo!\n");
    return;
}

int main()
{

    // testes utilizados!
    // ehPrimo(11);
    // ehPrimo(12);
    int i = 0;

    printf("Me diga qual número você quer descobrir se é primo");
    scanf("%i", &i);

    ehPrimo(i);

    return 0;
}