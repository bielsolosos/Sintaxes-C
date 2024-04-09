/* Escrever um programa que leia 3 valores reais a, b e c e apresente um menu com as opções abaixo:
a) a área do triângulo que tem a por base e b por altura.
b) a área do círculo de raio c.
c) a área do trapézio que tem a e b por bases e c por altura.
d) a área do quadrado de lado b.
e) a área do retângulo de lados a e b.*/

#include <stdio.h>

int main(){
    double a, b, c;
    int seletor;
    const double pi = 3.14; //Valor de pi

    printf("Insira os 3 valores respectivamente: ");
    scanf("%lf %lf %lf" , &a, &b, &c);

    printf("Agora me diga qual operação você deseja:\n(1) area Triangulo\n(2) area do Circulo\n(3) area do trapézio\n(4) area do quadrado\n(5) area do retangulo\n");
    scanf("%i" , &seletor);
    //tá feio no código mas da pra entender

    switch(seletor){

    case 1: 
        printf("area Triangulo = %.3lf\n" , (a*b));
        break;

    case 2:
        printf("area do Circulo = %.3lf\n" , (pi * c));
        break;

    case 3:
        printf("area do trapézio = %.3lf\n" , ((a + b) / c));
        break;

    case 4:
        printf("area do quadrado = %.3lf\n" , (b*b) );
        break;

    case 5:
        printf("area do retangulo = %.3lf\n" , (a*b));
        break;

    }

    return 0;
}