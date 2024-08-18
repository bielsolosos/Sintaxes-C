// 16. Faça uma função que receba um número inteiro positivo n e calcule o seu fatorial, n!
 
 #include <stdio.h>

 //Função que irá retornar o calculo do fatorial!
 int calculaFatorial(int n)
 {
    int resultado = 1;
    for(int i = 1; i <= n; i++)
    {
        resultado *= i;
    }

    return resultado;
 }

int main()
{
    int i = 0;
    printf("Escreva o número que você quer descobrir o fatorial! \n");
    scanf("%i" , &i);

    printf("O resultado eh: %i \n" , calculaFatorial(i));

    return 0;
}