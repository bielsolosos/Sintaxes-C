#include <stdio.h>

int main(){
    int N, Dig;

    printf("Me diga qual numero com 3 digitos voce quer ler!\n");
    scanf("%i", &N);

    //Usei a mesma lógica que eu achei no exercício anterior!
    printf("%i\n", N%10);
    Dig = N % 100;

    printf("%i\n", Dig/10);

    printf("%i\n", N/100);


    return 0;
}