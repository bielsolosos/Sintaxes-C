#include <stdio.h>

int main(){
    int balas, balas_sobra = 0, alunos;
    printf("insira quantos alunos sao\n");
    scanf("%i" , &alunos);

    printf("insira quantos balas sao\n");
    scanf("%i" , &balas);

    balas_sobra = balas % alunos;
    balas = balas / alunos;

    if(balas_sobra != 0){
        printf("Cada aluno ficou com %i balas e sobrou %i para o professor!" , balas, balas_sobra);        
    }
    else{
        printf("Cada aluno ficou com %i balas" , balas);
    }
    return 0;
}