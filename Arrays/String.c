#include <stdio.h>
#include <string.h>

int main(){
    char nome[] = "Gabriel";
    char nome1[] = "Burro";
    strcat(nome, nome1);
    printf("Bem vindo %s", nome );

    return 0;

}