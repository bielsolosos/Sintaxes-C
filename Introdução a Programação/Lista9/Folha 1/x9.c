// Escreva uma função que receba por parâmetro um valor inteiro e positivo N e retorna o valor de
// S. (Dica: crie uma função que calcula o fatorial e essa função será chamada dentro da função que
// está calculando o S)

#include <stdio.h>

// função calcular o vatorial:
double calculaFatorial(double n)
{
    if (n <= 1)
        return 1;

    double fatorial = n;

    for (double i = n - 1; i >= 1; i--)
    {
        fatorial *= i;
    }

    return fatorial;
}

double calcularFunc(double s)
{
    double resultado = 0.0;

    for(int i = 1; i <= s; i++)
    {
        resultado += (1.0/calculaFatorial(i));
    }

    resultado++;
    //adicionando mais um aqui

    return resultado;
}

int main()
{
    //Para testar a função de fatorial!
    //printf("Fatorial : %lf \n", calculaFatorial(10.0));
    int q = 0;

    printf("Me diga qual até que numero você quer descobrir: \n");
    scanf("%i" , &q);
    
    printf("Seu resultado é: %.4lf \n" , calcularFunc(q));

    return 0;
}