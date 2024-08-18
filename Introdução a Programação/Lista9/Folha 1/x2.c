#include <stdio.h>
#include <math.h>

//Faça uma função que receba por parâmetro o raio de uma esfera e calcula o seu volume
//v = (4/3) * Pi * R³



double calcula_raio_esfera(double raio){
    double pi = 3.14; //inicializando PI


    raio = pow(raio, 3);
    raio *= pi;
    //Solução feia dms!
    raio *= 4;
    raio /= 3;

    return raio;
}

int main(){
    double raio = 0;

    printf("Me diga qual o raio da sua função: ");
    scanf("%lf", &raio);

    printf("O volume eh: %lf \n" , calcula_raio_esfera(raio));

    return 0;
}