#include <stdio.h>
#include <math.h>

int main(){
    double n;
    printf("Me informe seu numero");
    scanf(" %lf " , &n);

    printf("Ao quadrado: %.2lf\n" , pow(n,2) );
    printf("Ao Cubo: %.2lf\n" , pow(n,3) );
    printf("Quarta Potencia: %.2lf\n" ,  pow(n,4));
    return 0;
}