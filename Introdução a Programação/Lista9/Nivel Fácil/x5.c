#include <stdio.h>
#include <math.h>

// Função que calcula a hipotenusa a partir de dois catetos!
double calculaHipotenusa(int cat1, int cat2)
{
    cat1 = pow(cat1, 2);
    cat2 = pow(cat2, 2);

    return sqrt(cat1 + cat2);
}

int main()
{
    double cat1 = 0, cat2 = 0;
    printf("Me diga os 2 catetos para descobrir a hipotenusa do triângulo!!!\n");
    scanf("%lf %lf", &cat1, &cat2);

    printf("O valor da sua hipotenusa é: %.2lf \n", calculaHipotenusa(cat1, cat2));

    return 0;
}