//Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v= (4/3) * pi * R^3).

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//refazer esse daqui também


double pi = 3.14;

//Import do pow não está funcionando vou fazer meu priprio bglh
double raizTripla(double n){
    return n * n * n;
}

//Dita cuja função 
double calculaVolumeEsfera(double raio){
    double resultado = ((4.0/3.0) * pi * raizTripla(raio));

    return resultado; 
}

int main(){
    printf("%.2lf\n", calculaVolumeEsfera(3));
}