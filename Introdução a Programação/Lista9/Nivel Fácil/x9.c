#include <stdio.h>

// Quis fazer baseado no que eu aprendi utilizando orientação a objetos!
typedef struct
{
    double lado1;
    double lado2;
    double lado3;
} Triangulo;

// função que verifica se o triângulo é realmente um triângulo!
// em caso positivo vai retornar 1 e em caso negativo retornará 0

int ehTrianguloOuNaoEh(Triangulo triangulo)
{
    if (triangulo.lado1 + triangulo.lado2 > triangulo.lado3)
        if (triangulo.lado2 + triangulo.lado3 > triangulo.lado1)
            if (triangulo.lado1 + triangulo.lado2 > triangulo.lado3)
                return 1;

    return 0;
}

// Agora uma função que vai imprimir o tipo de triãngulo!
void printaTipoDeTriangulo(Triangulo triangulo)
{
    int verificaTriangulo = ehTrianguloOuNaoEh(triangulo);
    if (!ehTrianguloOuNaoEh(triangulo))
    {
        printf("Triângulo inválido \n");
        return;
    }

    if (triangulo.lado1 == triangulo.lado2 && triangulo.lado2 == triangulo.lado3)
    {
        printf("Esse triângulo é equilátero\n");
        return;
    }

    if (triangulo.lado1 == triangulo.lado2 || triangulo.lado2 == triangulo.lado3 || triangulo.lado1 == triangulo.lado3)
    {
        printf("Esse triângulo é isósceles\n");
        return;
    }

    printf("Esse triângulo é equilátero \n");
    return;
}

int main()
{
    Triangulo triangulo;

    printf("Me diga os 3 lados do seu Triângulo!!");
    scanf("%lf %lf %lf", &triangulo.lado1, &triangulo.lado2, &triangulo.lado3);

    printaTipoDeTriangulo(triangulo);

    return 0;
}
