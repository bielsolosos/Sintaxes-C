#include <stdio.h>

double media(double n1, double n2, double n3){
    return (n1 + n2 + n3) / 3;
}

int main(){
    double n1, n2, n3;
    printf("Escreva as 3 notas em sequencia ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    printf("A media final eh: %.3lf\n" , media(n1, n2, n3));

    if(media(n1,n2,n3) >= 7){
        printf("Aluno Aprovado");
    }
    else{
        printf("Aluno Reprovado");
    }

    return 0;

}