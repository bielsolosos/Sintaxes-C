// Faça uma função que receba a distância em Km e a quantidade de litros de gasolina consumidos
// por um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo
// com a tabela abaixo:
#include <stdio.h>

// função para calcular o km/l
double calculaKmPorLitro(double km, double l)
{
    return km / l;
}

// Printar Resultado e o valor do carro
void printarResultado(double km, double l)
{
    double resultado = calculaKmPorLitro(km, l);

    printf("%.2lf KM/liros rodados, ", resultado);
    if (resultado < 8)
    {
        printf("Venda Este Carro! \n");
        return;
    }

    if (resultado >= 8 && resultado <= 12)
    {
        printf("Econômico! \n");
        return;
    }

    if (resultado > 12)
    {
        printf("Super Econômico!! \n");
        return;
    }
}

int main()
{
    double km = 0.0, l = 0.0;

    printf("Me diga o Km e os litros gastos nesse percurso respectivamente! \n");
    scanf("%lf %lf", &km, &l);

    printarResultado(km, l);

    return 0;
}