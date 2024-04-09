#include <stdio.h>

double salarioLiquido(double salario){
    double desconto = ((salario * 15) / 100);
    return salario - desconto;
}

int main(){
    double Salario;
    printf("me diga quanto voce recebe amigao: ");
    scanf("%lf" , &Salario);
    printf("Seu salario liquido eh de %.2lf. apos os impostos aplicados." , salarioLiquido(Salario) );

    return 0;
}