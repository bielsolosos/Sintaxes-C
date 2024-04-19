#include <stdio.h>

int main(){
    double Duracao, preco = 0;
    printf("Me diga quantos minutos voce ficou em chamada ");
    scanf("%lf" , &Duracao);

    for(int i = 1; i <= Duracao; i++){
        if(i <= 3){
            preco = preco + 0.75;
        }
        else{
            preco = preco + 0.26;
        }
    }

    printf("seu preco final eh: R$%.2lf" , preco);

    return 0;
}