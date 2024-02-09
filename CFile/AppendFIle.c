#include <stdio.h>

int main(){
    FILE *Arquivo;
    Arquivo = fopen("Gabri.txt","a");
    for(int i=0; i<=100;i++){
        fprintf(Arquivo,"Flamengo Feio\n");
    }

    fclose(Arquivo);
    return 0;
}