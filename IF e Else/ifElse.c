#include <stdio.h>

int main() {
    int X,Y;
    X = 555;
    Y = 22;

    if(X > Y)
    {
        printf("A Variavel X é maior que Y!!!\nO Valor é%i",X);
    } 
    
    else if (X == Y)
    {
        printf("As duas Variáveis são iguais!!!!\nO Valor é %i",X);
    } 
    
    else
    {
        printf("A Varíavel Y é BEEEM maior que a Variável X\nO Valor é %i",Y);
    }
    return 0;
}