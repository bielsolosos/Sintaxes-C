#include <stdio.h>

int Media(int Valores[], int Tamanho){
    int somatorio;
    for(int i = 0; i <= Tamanho; i++){
        somatorio += Valores[i];
    }
    return somatorio/Tamanho;
}

int Media_Pares(int Valores[], int Tamanho){
    int somatorio, Div;
    for(int i = 0; i <= Tamanho; i++){
        if(i % 2 == 0){
            somatorio += Valores[i];
            Div++;
        }
        else continue;
    }
    return somatorio/Div;
}

int Maior(int Valores[], int Tamanho){
    int maior = 0;
    for(int i = 0; i <= Tamanho; i++){

        if(Valores[i] > maior){
            maior = Valores[i];
        }
        else continue;
    }

    return maior;
}

int Menor(int Valores[], int Tamanho){
    int menor = 0;
    for(int i = 0; i <= Tamanho; i++){

        if(Valores[i] < menor){
            menor = Valores[i];
        }
        else continue;
    }

    return menor;
}


int main(){
    int contador = 0, i = 0, N[100]; //Aloquei de forma simples 100 digitos limitando
    int soma = 0; 
    double PercentualPos, PercentualNeg;


    do{
        printf("digite seu número: (digite -1 para cancelar a opereção) ");
        scanf("%i" , &i);
        if(i != -1){
            N[contador] = i;
            contador++; //contador também se torna o tamanho do vetor!
        }

        else break;
    }while(i != -1); 

    /*for(int i = 0; i<contador; i++){
        printf("%i ", N[i]);                //Teste do Vetor!!!
    }*/

    //Soma de todo o vetor!
    for(int j = 0; j < contador; j++){
        soma += N[j]; 
    }
    printf("Soma = %i\n" , soma);
    

    //Quantidade de númerors digitados!

    printf("Quantidade de Vetores: %i\n" , contador);

    //Media do Vetor (Utilizei uma função)

    printf("Media: %i\n" , Media(N, contador));


    //Percentual de números positivos
    for(int j = 0; j < contador; j++){
        if(N[j] > 0){
            PercentualPos++;
        }
    }
    PercentualPos = (PercentualPos / contador) * 100;
    printf("Percentual de Positivos: %.2lf\n" , PercentualPos);
    
    //Percentual de números negativos:
    for(int j = 0; j < contador; j++){
        if(N[j] < 0){
            PercentualNeg++;
        }
    }
    PercentualNeg = (PercentualNeg / contador) * 100;
    printf("Percentual de Positivos: %.2lf\n" , PercentualNeg);

    //Maior e menor valor!
    printf("Maior Valor = %i\n" , Maior(N, contador));
    printf("Menor Valor = %i\n" , Menor(N, contador));

    //Média dos pares:
    printf("Media Pares: %i\n" , Media_Pares(N, contador));
    return 0;
}