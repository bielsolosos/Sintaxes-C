#include <stdio.h>

int main(){
    int X, Y;
    printf("Me diga seu X e Y respectivamente: ");
    scanf("%i %i" , &X , &Y);

    if(X % Y == 0){
        printf("Entradas %i e %i ===> %i eh multiplo de %i" , X , Y , ehMenor(X,Y) , ehMaior(X,Y));
    }
    else{
        printf("Entradas %i e %i ===> %i nao eh multiplo de %i" , X , Y , ehMenor(X,Y) , ehMaior(X,Y));
    }
    return 0;
}

int ehMaior(int n1, int n2){
    if(n1 >= n2){
        return n1;
    }
    else{
        return n2;
    }
}

int ehMenor(int n1, int n2){
    if(n1 <= n2){
        return n1;
    }
    else{
        return n2;
    }
}
