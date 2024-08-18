// 1. Escreva uma função que receba um número inteiro maior do que zero e retorne a soma de todos os
// seus algarismos. Por exemplo, ao número 251 corresponder ao valor 8 (2 + 5 + 1). Se o número
// lido não for maior do que zero, o programa terminar a com a mensagem “Número inválido”.

#include <stdio.h>

// Função que vai pegar o número e retornar a soma deles!!!
int pegarUmNumero(int entrada)
{
    if (entrada <= 0)
    {
        printf("Número inválido\n");
        return -1; 
    }

    int soma = 0;
    while (entrada > 0)
    {
        soma += entrada % 10; 
        entrada /= 10;        
    }

    return soma;
}

int main()
{
    int entrada = 0;

    printf("Me diga um número para retornar a soma dos algoritmos! \n");
    scanf("%i" , &entrada);

    printf("A soma dos números é: %i \n" , pegarUmNumero(entrada));

    return 0;
}