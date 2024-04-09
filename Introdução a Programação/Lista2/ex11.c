#include <stdio.h>

int main(){
    int Numeros[3], maior = 0, menor = 0, meio = 0;
    printf("Digite os 3 numeros espacados ");
    scanf("%i %i %i", &Numeros[0], &Numeros[1], &Numeros[2]);

    for(int i = 0; i <= 2; i++){
        if(Numeros[i] > maior){
            maior = Numeros[i];
        }
    } 

    menor = maior;


    for(int j = 0; j <= 2; j++){
        if(Numeros[j] <= menor){
            menor = Numeros[j];
        }
    }

    for(int k = 0; k <= 2; k++){
        if(Numeros[k] != maior && Numeros[k] != menor){
            meio = Numeros[k];
        } 
    }     

    printf("Maior: %i\n" , maior);
    printf("Meio: %i\n", meio);
    printf("Menor: %i\n", menor);

    return 0;
}