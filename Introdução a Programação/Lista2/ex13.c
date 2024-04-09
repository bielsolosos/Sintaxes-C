#include <stdio.h>

int main(){
    int km, litro;

    printf("Digite a quantidade de km e os litros de gasolina gastos respectivamente: ");
    scanf("%i %i" , &km, &litro);

    km = km/litro;

    if(km < 8){
        printf("Venda o Carro!\n");
    }

    else if(km > 8 && km < 14){
        printf("Economico\n");
    }
    
    else{
        printf("Carro super economico!!!!\n");
    }

    return 0;
}