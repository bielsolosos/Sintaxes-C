#include <stdio.h>

int main(){
    const double pi = 3.14;
    int Graus;
    printf("escreva o angulo em graus que voce quer converter! ");
    scanf("%i" , &Graus);

    printf("Seu angulo em Rad eh %.3lf" , ( (double)Graus * (pi/180) ));

    return 0;
}