#include <stdio.h>
#include <math.h>


double Delta(int A, int B, int C){
    //Funct p/ calcular delta pq eu sou preguiçoso
    return pow(B, 2) - (4*A*C);
}

int main(){
    //Entradas:
    double A , B , C , Resultado1, Resultado2, delta;
    scanf("%lf %lf %lf" , &A ,&B ,&C);
    //CARALHOOO MUITO FODA ESSE USO DE PONTEIROS AQUI EM CIMA!!!
;

    delta = Delta(A, B, C);
    printf("Seu Delta eh: %lf\n\n", delta);

    if(delta < 0){
        printf("Impossível calcular");
    }
    else{
        Resultado1 = ((-B + sqrt(delta)) / (A * 2) );
        Resultado2 = ((-B - sqrt(delta)) / (A * 2) );
        printf("R1 = %0.2lf\n", Resultado1);
        printf("R2 = %0.2lf", Resultado2);
    }

    return 0;
}
