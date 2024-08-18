// 13. Escreva uma função para determinar a quantidade de números primos abaixo de um número N.
#include <stdio.h>

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

// Função que verifica se é primo, retorna 1 se for positivo e retorna 0 se for negativo
int ehPrimo(int n)
{
    ehPositivo(&n);
    if (n == 0)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return 0;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

// Agora a função que vai printar o número que é primo!
void imprimeSeEhPrimo(int n)
{
    int quantidadeDeNumerosPrimos = n, numOriginal = n;
    for(n; n >= 0; n--)
    {
        int teste = ehPrimo(n);
        (teste == 0) ? quantidadeDeNumerosPrimos-- : printf("%i , " , n);
    }

    printf("São Primos!!!!\n");
    printf("A quantidade de numeros primos até: %i, são de %i \n" , numOriginal, quantidadeDeNumerosPrimos );
}

int main()
{
    int numero = 0;

    printf("Me diga até que número você quer q eu te diga quais são primos! \n");
    scanf("%i" , &numero);

    imprimeSeEhPrimo(numero);

    return 0;

}