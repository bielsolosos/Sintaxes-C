#include <stdio.h>

//ainda possui o bug do escaleno ;-

int ehtriang(int a, int b, int c){ //função para verificar se é triangulo
    if(a < b + c || b < a + c || c < b + a  ){
        return 1; //falso 
    }
    else{
        return 0; //positivo
    }
}

int main(){
    int a, b, c;
    printf("Me diga os 3 lados do seu triangulo ");
    scanf("%i %i %i" , &a, &b , &c);

    if(ehtriang(a,b,c) == 1){
        printf("eh Triangulo\n");
        
        if(a == b && a == c && b == a && b == c && c == a && c == b){
            printf("eh equilátero\n");
            return 0;
        }
        else if((a == b && a == c) || (b == a && b == c) || (c == a && c == b)){
            printf("eh isóceles\n");
            return 0;
        }
        else{
            printf("eh escaleno\n");
            return 0;
        }
    }
    else{
        printf("nao eh triangulo\n");
        return 0;
    }


}