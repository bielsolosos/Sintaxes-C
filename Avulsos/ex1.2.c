#include <stdio.h>
int main(){
    int N, i = 0;
    
    printf("Me diga quantas vezes você quer que imprima o asterístico ");
    scanf("%i" , &N);

    while(i < N){
        printf("* ");
        i ++;
    }

    return 0;
}