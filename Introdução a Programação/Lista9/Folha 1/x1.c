#include <stdio.h>

//faça uma função de um número inteiro e imprima os números de 1 até n

void imprime_numeros_inteiros(int n){

    for(int i = 1; i <= n; i++){
        printf("%i, " , i);
    }
    //P/ nn bugar no linux!!!!
    printf("/n");
}

int main(){
    imprime_numeros_inteiros(12);
    return 0;
}