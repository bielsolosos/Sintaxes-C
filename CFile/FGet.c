#include <stdio.h>

int main(){
    FILE *Arquivo;
    Arquivo = fopen("Gabri.txt", "r");
    //Alterar caso queia que o IF dê errado

    char string[100];

    if(Arquivo != NULL){

    
        while(fgets(string, 100, Arquivo)){
            printf("%s",string);
        }
    }
    else{
        printf("Arquivo nao encontrado");
    }



    fclose(Arquivo);
    return 0;
}