#include <stdio.h>

int main(){
    int Ano;

    printf("Escreva o numero que vc quer ver se eh bissexto ");
    scanf("%i" , &Ano);

    if(Ano % 400 == 0 || (Ano % 4 == 0 && !(Ano % 100 == 0) )){
        printf("eh bissexto\n");
    }
    else{
        printf("Nao eh bissexto\n");
    }

    return 0;
}