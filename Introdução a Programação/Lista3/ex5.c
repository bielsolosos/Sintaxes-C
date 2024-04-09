#include <stdio.h>

int main(){
    double kmAtual, kmAnterior, litros;
    printf("Digite a kmAtual e a kmAnterior respectivamente e depois a quantidade de litros consumida ");
    scanf("%lf %lf %lf", &kmAtual, &kmAnterior , &litros); 

    printf("Litro por km rodado = %.4lf" , (kmAtual - kmAnterior) * litros ); 

    return 0;
}