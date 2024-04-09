#include <stdio.h>

int main(){
    int N;
    printf("Me diga os N primeiros numeros naturais ímpares: ");
    scanf("%i" , &N);

    for(int i = 0; i < 10000000; i++){
        if(i % 2 != 0){
            printf("%i ", i);
        }
        if(i == N){
            printf("\n");
            return 0;    
        }
    }
}