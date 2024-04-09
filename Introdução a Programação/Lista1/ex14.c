#include <stdio.h>

int ehMaior(int n1, int n2, int n3){
    if(n1 > n2 && n1 > n3){
        return n1;
    }
    else if(n2 > n1 && n2 > n3){
        return n2;
    }
    else{
        return n3;
    }
}

int ehMenor(int n1, int n2, int n3){
    if(n1 < n2 && n1 < n3){
        return n1;
    }
    else if(n2 < n1 && n2 < n3){
        return n2;
    }
    else{
        return n3;
    }
}

int main(){
    int n[3];
    printf("Escreva os 3 numeros em sequencia ");
    scanf("%d %d %d", &n[0], &n[1], &n[2]);
    for(int i = 0; i <= 2; i++){
        if(n[i] > 0){
            printf("%i, ", n[i]);
        }
    }
    printf("Sao maiores que 0: %i eh o maior deles e %i eh o menor deles", ehMaior(n[0],n[1],n[2]) , ehMenor(n[0],n[1],n[2]) );


    return 0;
}