#include <stdio.h>

double mediaPonderada(double n1, double n2, double n3){
    return ((n1 * 2) + (n2 * 3) + (n3 * 5) ) / 3;
}

int main(){
    double n1, n2 , n3;
    printf("insira as 3 notas do aluno por favor: ");
    scanf("%lf %lf %lf" , &n1, &n2, &n3);

    printf("A media eh: %.2lf" , mediaPonderada(n1, n2, n3));

    return 0;
}