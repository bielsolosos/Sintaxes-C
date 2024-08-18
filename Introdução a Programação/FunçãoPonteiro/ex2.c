#include <stdio.h>
#include <stdlib.h>
// fazer uma função que veja se o número é primo ou não!
//Peidei na xerequinha nesse daqui fiquei com preguiça!

int ehPrimo(int n) {
    if (n <= 1) {
        return 0; 
    }

    if (n == 2 || n == 3) {
        return 1;  
    }

    if (n % 2 == 0) {
        return 0;  
    }

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return 0;  
        }
    }

    return 1;  
}

int main(){

    int var = 0;
    printf("Me diga qual número você quer descobrir se é primo! \n");
    scanf("%i", &var);

    int resultado = ehPrimo(var);

    printf("%i\n", resultado);

    return 0;
}
