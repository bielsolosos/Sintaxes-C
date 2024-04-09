#include <stdio.h>

int main(){
    int numero, ehpor3, ehpor5;
    printf("Me diga seu numero! ");
    scanf("%i" , &numero);

    if(numero % 3 == 0){
        ehpor3 = 1;
    }

    if(numero % 5 == 0){
        ehpor5 = 1;
    }    

    if(ehpor3 == 1 && ehpor5 == 1){
        printf("Numero reprovado\n");
    }
    else{
        printf("Numero aprovado!\n");
    }

    return 0;
}