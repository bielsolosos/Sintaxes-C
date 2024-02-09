#include <stdio.h>

int main(){
    int idade = 21;
    int* ptr = &idade;

    printf("%i\n", idade);
    printf("%p\n", &idade);

    printf("%p\n" , ptr);
    //Note que o de cima vai guardar aonde está armazenado o ponteiro da variável idade!
    printf("%p", &ptr);
    //pois se a gente colocar o indicador de ponteiro na variável que armazena o ponteiro de didade
    //vai dar um ponteiro diferente

    return 0;
}