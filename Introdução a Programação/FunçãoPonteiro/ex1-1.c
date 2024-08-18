#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//tentativa de função de ponteiros tlgd

int soma(int *a, int *b, int *resposta){
    *resposta = *a + *b;
}

//Ponteiros enfiados na bunda!

int main(){
    int resposta = 0, a, b;
    bool vaiOuNaoVai;

    do
    {
        a = 0, b = 0;
        printf("me diga quais números você quer somar!\n");
        scanf("%i %i", &a, &b);

        soma(&a, &b, &resposta);

        printf("sua resposta eh: %i\n" , resposta);

        printf("você quer somar outro número? (s = 1/n = 0)\n");
        scanf("%i", &a );

        if(a == 0) vaiOuNaoVai = false;


    } while (vaiOuNaoVai == true);
    
    return 0;
}