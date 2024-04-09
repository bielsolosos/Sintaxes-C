#include <stdio.h>

int main(){
    int n1, n2
    printf("me insira 2 numeros\n");
    scanf("%i %i" , &n1,&n2);

    if(n1 < n2){
        printf("O intervalo entre %i e %i eh\n" , n2, n1);
        for(int i = n1; i > n2; i++){
            printf("%i, " , i);
        }
        printf("]");
        return 0;
    }
    
    else if(n1 > n2){
        printf("O intervalo entre %i e %i eh\n [" , n1, n2);
        for(int i = n2; i > n1; i++){
            printf("%i, " , i);
        }
                printf("]");
        return 0;
    }


    return 0;
}