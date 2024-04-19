#include <stdio.h>
int main(){
    int N, i = 0;
    
    printf("Me diga quantas vezes você quer que imprima o asterístico ");
    scanf("%i" , &N);

    do{
        printf("* ");
        i ++;
    }while(i < N);

    return 0;
}