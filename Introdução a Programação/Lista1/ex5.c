//Calular delta apenas! 
#include <stdio.h>
#include <math.h>

double delta(double x, double y, double z){
    return (pow(y,2) - (4 * x * z));
}

int main(){
    double x, y, z;
    printf("Insira o coeficiente x, y, z respectivamente ");
    scanf("%lf %lf %lf", &x, &y, &z);

    printf("Seu coeficiente delta eh %.2lf" , delta(x , y, z));

    return 0;
}