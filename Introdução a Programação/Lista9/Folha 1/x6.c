// Faça uma função que recebe 2 notas, a função deverá calcular a média aritmética do aluno e
// retorna o seu conceito, conforme a tabela abaixo:

#include <stdio.h>

double mediaAritmetica(double x, double y)
{
    return x * y / 2;
}

char printarConceito(double media)
{
    if (media > 8.9)
    {
        return 'A';
    }

    if (media > 7.0)
    {
        return 'B';
    }

    if (media > 5.0)
    {
        return 'C';
    }

    if (media > 0 && media < 4.9)
    {
        return 'D';
    }
}

int main()
{
    double x, y;
    printf("Digite os 2 números que você quer descobrir a média ponderada:\n");
    scanf("%lf %lf", &x, &y);

    printf("sua média é: %.2lf, Conceito: %c \n" , mediaAritmetica(x, y), printarConceito((mediaAritmetica(x,y))) );

    return 0;
}