// 17. Faça uma função que receba um número N e retorne a soma dos algarismos de N!. Ex: se N = 4,
// N! = 24. Logo, a soma de seus algarismos é 2 + 4 = 6.

#include <stdio.h>

//Função que retorna o fatorial!
 int calculaFatorial(int n)
 {
    int resultado = 1;
    for(int i = 1; i <= n; i++)
    {
        resultado *= i;
    }

    return resultado;
 }

// Função que vai pegar o número e retornar a soma deles!!!
int pegarUmNumero(int entrada)
{
    entrada = calculaFatorial(entrada);

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

    printf("Me diga um número para retornar a soma dos algoritmos de seu fatorial!! \n");
    scanf("%i" , &entrada);

    printf("A soma dos números é: %i \n" , pegarUmNumero(entrada));

    return 0;
}