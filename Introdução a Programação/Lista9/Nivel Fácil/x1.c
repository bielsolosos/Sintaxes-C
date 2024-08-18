// Crie uma função que recebe como parâmetro um número inteiro e devolve seu dobro:
#include <stdio.h>

int devolveDobro(int numero)
{
    return numero * 2;
}

int main()
{
    int numero = 0;
    printf("Me diga qual número você quer descobrir o dobro\n");
    scanf("%i" , &numero);

    printf("O dobro do seu número é: %i \n" , devolveDobro(numero));

    return 0;
}