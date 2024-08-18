// 10. Faça uma função que receba dois números inteiros positivos por parâmetro e retorne a soma dos N
// números inteiros existentes entre eles.

#include <stdio.h>

//função que define qual é maior!
int ehMaior(int n1, int n2)
{
    return (n1 > n2) ?  n1 : n2;
}

int ehMenor(int n1, int n2)
{
    return (n1 < n2) ? n1 : n2;
}

// Dita cuja função de retornar a soma dos N numeros inteiros
int numerosEntreEles(int n1, int n2)
{
    if(n1 == n2) return 0;

    int resultado = 0;
    int maior = ehMaior(n1,n2);
    int menor = ehMenor(n1,n2);

    for(menor + 1; menor < maior; menor++)
    {
        resultado += menor;
    }

    return resultado;
}

int main()
{
    int n1 = 0, n2 = 0;

    printf("Escreva os 2 números: ");
    scanf("%i %i", &n1, &n2);

    printf("A soma dos números entre os eles é: %i \n", numerosEntreEles(n1, n2));

    return 0;
}