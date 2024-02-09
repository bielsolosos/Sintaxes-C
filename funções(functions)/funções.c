#include <stdio.h>

int main(){
    int n1 = 0;
    int n2 = 0;;
    scanf("%i" , &n1);
    scanf("%i" , &n2);
    // utilizando ponteiro p/ referência a memória!
    printf("%i", soma(n1,n2));
    return 0;
}

int soma(int x, int y){ //declaration of a function with 2 parameters
    return x + y; //body of the function
}