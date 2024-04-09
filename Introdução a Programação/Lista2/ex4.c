#include <stdio.h>

/*Faça um programa para ler as dimensões de um terreno (comprimento e largura) e o preço
do metro do arame. O programa deverá fornecer como saída o custo para cercar este mesmo
terreno.*/

int main(){
    float Altura, Largura;
    printf("Me diga a Altura e Largura do seu Terreno: ");
    scanf("%f %f", &Altura, &Largura);

    printf("O preco do seu terreno eh: R$ %.2f\n" , (Altura*Largura)/2);
    //inventei o preço de cabeça

    return 0;
}