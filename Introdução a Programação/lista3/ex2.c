#include <stdio.h>

int main(){
    int Celcius;
    printf("Me diga quantos Graus vc quer em Celcius");
    scanf("%i" , &Celcius);

    printf("Farenheit: %lf\n" , ((((double)Celcius) * 1.8) + 32));

    return 0;
}