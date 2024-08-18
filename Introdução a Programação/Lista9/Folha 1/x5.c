#include <stdio.h>
#include <math.h>

// Faça uma função que receba por parâmetro os valores necessários para o cálculo da fórmula de
// báskara e imprima as suas raízes, caso seja possível calcular.

// função que vai retornar o valor de Delta
double calculaDelta(double a, double b, double c)
{
    // para não correr risco do calculo explodir!
    double calculoDireita = pow(b, 2);
    double calculoEsquerda = 4 * a * c;

    return calculoDireita - calculoEsquerda;
}

void calculaBhaskara(double a, double b, double c)
{
    double delta = calculaDelta(a, b, c);

    // condição para ver se é possível calcular
    if (delta < 0)
    {
        printf("Impossível calcular\n");
        return;
    }

    double resultados[2];

    // deixar b negativo
    b = -b;

    resultados[0] = b + sqrt(delta) / 2 * a;
    resultados[1] = b - sqrt(delta) / 2 * a;

    printf("resultado da Raiz positiva = %lf \n", resultados[0]);
    printf("resultado da Raiz negativa = %lf \n", resultados[1]);
}

int main()
{
    //exemplo com raiz positiva e negativa diferentes!
    calculaBhaskara(1,-5,6);
    return 0;
}