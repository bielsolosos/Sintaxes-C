// 12. Faça uma função que receba por parâmetro dois valores X e Z. Calcule e retorne o resultado de
// X Z para o programa principal. Atenção não utilize nenhuma função pronta de exponenciação.

#include <stdio.h>

// Função para calcular o x^z
double potencia(double x, double z)
{
    double resultado = 1.0;
    int expoente = z;

    for (int i = 1; i <= expoente; i++)
    {
        resultado *= x;
    }

    return resultado;
}

int main()
{
    double x = 0.0, y = 0.0;

    printf("Escreva o número que deseja elevar e a sua potência respectivamente \n");
    scanf("%lf %lf", &x, &y);

    printf("Seu resultado eh: %.2lf \n", potencia(x, y));

    return 0;
}