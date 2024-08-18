// Faça uma única função que leia 10 valores inteiros e que retorne o maior valor lido para o
// programa principal que irá imprimi-lo.
#include <stdio.h>

int retornaMaior(int numeros[10])
{
    int i = 0, maior;
    for(i; i <= 9; i++)
    {
        if(maior < numeros[i])  maior = numeros[i];
    }
    
    return maior;
}

int main()
{
    int numeros[10];

    for(int i = 0; i < 9; i++){
        printf("Me diga o %i, número do array!\n", i );
        scanf("%i", &numeros[i]);
        printf("\n");
    }

    printf("Maior número digitado foi: %i \n" , retornaMaior(numeros));

    return 0;
}