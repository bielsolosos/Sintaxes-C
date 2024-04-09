#include <stdio.h>

void ehMaior(int n1, int n2){
    if(n1 > n2){
        printf("O maior Valor lido eh: %i" , n1);
    }else if(n1 < n2){
        printf("O maior Valor lido eh %i", n2);
    }
    else{
        printf("Os valores possuem o mesmo valor");
    }
}

int main(){
    int n1, n2;

    printf("Insira dois valores que eu te digo qual eh maior\n");
    scanf("%i %i", &n1, &n2);

    ehMaior(n1, n2);
    return 0;
}