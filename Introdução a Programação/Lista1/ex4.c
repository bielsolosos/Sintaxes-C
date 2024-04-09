#include <stdio.h>

int main(){
    int minutos, horas = 0;

    printf("insira quantos minutos o atleta ficou correndo ");
    scanf("%i" , &minutos);

    if(minutos < 60){
        printf("O atleta ficou %i minutos correndo" , minutos);
    }
    else{
        horas = minutos / 60;
        minutos = minutos % 60;
        printf("O atleta ficou %i horas e %i minutos correndo!", horas, minutos);
    }
    return 0;
}