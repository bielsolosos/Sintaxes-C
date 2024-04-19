#include <stdio.h>
int main(){
    int N;
    
    printf("Me diga quantas vezes você quer que imprima o asterístico ");
    scanf("%i" , &N);

    for(int i = 0; i < N; i++){
        printf("* ");
    }

    return 0;
}