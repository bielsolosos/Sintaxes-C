#include <stdio.h>

int main(){
    int N, Enumeros, Somatoria;

    printf("me diga quantos numeros inteiros voce quer somar! ");
    scanf("%i" , &N);

    for(int i = 0; i <= N; i++){
        printf("me diga qual numero voce quer somar!");
        scanf("%i" , &Enumeros);
        if(Enumeros % 2 == 0){
            Somatoria += Enumeros;
        }
    }

    printf("Somatoria dos pares = %i" , Somatoria);
}