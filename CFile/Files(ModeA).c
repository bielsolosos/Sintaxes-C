#include <stdio.h>

int main(){
    FILE *fprt;

    fprt = fopen("teste.txt", "w");
    fprintf(fprt, "GABRIEL FEIO\n");
    fprintf(fprt, "por favor gente da movimento aaaaa");

    fclose(fprt);
    return 0;
}