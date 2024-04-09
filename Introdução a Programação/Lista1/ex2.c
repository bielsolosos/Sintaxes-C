#include <stdio.h>

int media(int n1, int n2){
    return (n1 + n2)/2;
}

int main(){
    int n1, n2;
    printf("Digite os 2 numeros que voce quer descobrir a media eritimetica!\n");
    scanf("%i %i" , &n1, &n2);
    printf("A media entre %i e %i eh %i", n1, n2, media(n1,n2));

    return 0;
}