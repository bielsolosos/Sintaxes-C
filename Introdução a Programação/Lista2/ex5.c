#include <stdio.h>

/*
Faça um programa que leia uma temperatura em graus Celsius e converta para Kelvin e
Fahrenheit. Considere:
C = 5.0 ∗ (F − 32.0)/9.0
C = K − 273.15
*/

int main(){
    double Celsius;
    printf("Me diga a temperatura em Celsius");
    scanf("%lf" , &Celsius);

    printf("F = %.2lf\n" , ((Celsius * 1.8) + 32 ));
                                    //1.8 = 9/5

    return 0;
}