// 15. Faça uma função que receba um inteiro N como parâmetro, calcule e retorne o resultado da
// seguinte série:

#include <stdio.h>
#include <math.h>

// função que vai retornar um dos parâmetros da função:

double calculaParteDaFuncao(double n)
{
    double parteDeCima = pow(n, 2) + 1;
    double parteDeBaixo = n + 3;

    return parteDeCima / parteDeBaixo;
}

// Agora uma função que vai fazer o loop calculando e vai retornar o resultado da função!
double calculaFuncao(double n)
{

    double resultado = 0.0;

    for (int i = 1; i <= n; i++ )
    {
        resultado += calculaParteDaFuncao(n);
    }

    return resultado;
}

int main()
{
    double n = 0.0;
    printf("Escreva o numero que você quer descobrir o resultado! \n");
    scanf("%lf" , &n);

    printf("O resultado dessa função eh: %.2lf \n" , calculaFuncao(n));

    return 0;
}