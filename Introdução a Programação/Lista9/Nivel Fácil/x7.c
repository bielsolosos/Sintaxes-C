// 7. Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo representará a
// operação que se deseja efetuar com os números. Se o símbolo for + deverá ser realizada uma
// adição, se for − uma subtração, se for / uma divisão e se for ∗ será efetuada uma multiplicação.

#include <stdio.h>

double operacaoComOperador(double x, double y, char c)
{
    switch (c)
    {
    case '+':
        // Soma
        return x + y;
        break;

    case '-':
        // subtração
        return x - y;
        break;

    case '/':
        // Divisão
        return x / y;
        break;

    case '*':
        // Multiplicação
        return x * y;
        break;

    default:
        printf("Operação invalida\n");
        return 0;
        break;
    }
}

int main()
{
    double x = 0.0;
    double y = 0.0;
    char c;
    printf("Me fale os 2 números que você gostaria de imprimir e em seguida a operação que você gostaria de fazer!\n");
    scanf("%lf %lf %c" , &x, &y, &c);

    x = operacaoComOperador(x,y,c);

    if(x != 0) printf("Seu Resultado é: %.2lf \n" , x); 

    return 0;
}