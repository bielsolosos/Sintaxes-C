// Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado perfeito é um
// número inteiro não negativo que pode ser expresso como o quadrado de outro número inteiro. Ex:
// 1, 4, 9...
#include <stdio.h>
// Vou dar uma roubada utilizando isso daqui!
#include <math.h>

// função que vai verificar se o número é um quadrado perfeito:
int ehQuadradoPerfeito(double i)
{
    if (i < 0)
        return 0;

    double verificaSeEhQuadradoPerfeito = sqrt(i);
    int raizInt = (int)verificaSeEhQuadradoPerfeito;

    if (raizInt * raizInt == i)
        return 1;

    return 0;
}

// Função se vai imprimir se é ou não
void imprimeSeEhQuadradoPerfeito(double i)
{

    if (ehQuadradoPerfeito(i))
        printf("é um quadrado perfeito!\n");
    else
        printf ("não é um quadrado perfeito!\n");
}

int main()
{
    double num = 0;
    printf("Me diga qual número que é um quadrado perfeito: \n");
    scanf("%lf", &num);

    imprimeSeEhQuadradoPerfeito(num);

    return 0;
}