#include <stdio.h>

int main(){
    int horaInicial, minutoInicial, segundoInicial, segDado, horaFinal, minutoFinal;
    printf("Me Diga espaçadamente as Horas Minutos e Segundos respectivamente: ");
    scanf("%i %i %i", &horaInicial, &minutoInicial, &segundoInicial);

    printf("Hora de Início: %i:%i:%i\n\n", horaInicial, minutoInicial, segundoInicial);

    printf("Agora me diga quantos segundos dura o experimento: ");
    scanf("%i" , &segDado);

    if(segDado >= 3600){
        while(segDado >= 3600){
            horaFinal += 1;
            segDado -= 3600;
        }
    }
    
    if(segDado >=60){
        while(segDado >= 60){
            minutoFinal += 1;
            segDado -= 60;
        }
    }

    printf("Hora de Início: %i:%i:%i\n\n", (horaInicial - horaFinal), (minutoInicial - minutoFinal), (segundoInicial - segDado));

    return 0;
}