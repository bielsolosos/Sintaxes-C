#include <stdio.h>
//Tentei muito achar uma lógica usando for e do-while nesse exercício
//foi então assim q eu cheguei nessa lógica de ir dividindo por MULTIPLOS de 10

int main(){
    int numero;

    printf("Me diga qual número com 4 dígitos você quer imprimir: ");
    scanf("%i", &numero);

    // Separa os dígitos e imprime um por linha
    int digito;
    digito = numero / 1000;
    printf("%i\n", digito);
    numero %= 1000;
    digito = numero / 100;
    printf("%i\n", digito);
    numero %= 100;
    digito = numero / 10;
    printf("%i\n", digito);
    digito = numero % 10;
    printf("%i\n", digito);
    return 0;
}