#include <stdio.h>
#include <math.h>
//Biblioteca math dando erro no Linux!

/*Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de
um cilindro circular e calculado por meio da seguinte fórmula: V = π ∗ raio2 ∗ altura, onde π
= 3.141592.*/


int main(){
    double Altura, Raio;
    const double Pi = 3.141592;

    printf("Me diga por favor a altura e o raio do seu Cilindro!");
    scanf("%lf %lf", &Altura, &Raio);

    Raio = pow(Raio,2);

    printf("%.3lf \n", (Pi * Raio * Altura ));

    
    return 0;
}