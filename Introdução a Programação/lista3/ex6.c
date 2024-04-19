#include <stdio.h>

int main(){
    
    //setando as variáveis!
    char sexo[10] = {"MMFFFMMFF"}, corOlhos[10] = {"AAVVVVCCVV"}, corCabelos[10] ={"LCPLCPLCPP"}; 
    //A gente cria uma String de 10 caracteres porém vai ser apenas 1 caractere de cada!
    int anos[10] = {20, 23, 40, 10, 23, 55, 20, 30, 21, 14}, contMediaMasculino, contHomens;
    
    //por ser um LOOP bem grande eu criei as arrays em baixo afim de deixar mais simples os testes!

/*
    //um Loop para pedir as entradas do usuário
    for(int i = 0; i <= 9; i++){
        printf("me diga o sexo da amostra %i \n" , i);
        scanf("%c" , &sexo[i]);
        getchar();

        printf("me diga a cor dos olhos da mostra %i \n ", i);
        scanf("%c" , &corOlhos[i]);
        getchar();

        printf("Me diga a cor dos dos cabelos da amostra %i \n", i);
        scanf("%c" , &corCabelos[i]);

        printf("Me diga a idade da amostra %i \n", i);
        scanf("%i" , &anos[i]);
    }
    */

    for(int j = 0; j <= 9; j++){
        if(sexo[j] == 'M'){
            contMediaMasculino += anos[j];
            contHomens ++;
        }
        
    }

    printf("Media de idade dos homens = %i\n" , (contMediaMasculino/contHomens));

    double contMulheres = 10 - contHomens;

    printf("A porcentagem de mulheres eh %.2lf\n" , contMulheres/100);

    int mulheresEspecificas = 0; //nome Horrível mas faz Jús ao seu trabalho

    for(int k = 0; k <= 9; k++){
        if(sexo[k] == 'F'){

            if(anos[k] > 1 && anos[k] <= 35 ){

                if(corCabelos[k] == 'L'){

                    if(corOlhos[k] == 'V'){
                        mulheresEspecificas++;
                    }
                }
            }
        }
    }

    printf("Mulheres uja idade está entre 1 e 35 anos e que tenha olhos verdes e cabelos louros eh %i\n " , mulheresEspecificas);
    return 0;
}


/*Uma pesquisa sobre algumas características físicas da população de uma determinada região
coletou os seguintes dados para serem analisados:
sexo (M = masculino ou F = feminino)
cor dos olhos (A = azuis, V = verdes ou C = castanhos)
cor dos cabelos (L = loiros, C = castanhos ou P = pretos)
idade em anos
Escreva o programa que leia os dados de 10 habitantes, determine:
a) a idade média dos habitantes do sexo masculino;
b) a porcentagem de habitantes do sexo feminino;
c) a porcentagem de indivíduos do sexo feminino cuja idade está entre 1 e 35 anos e que tenha
olhos verdes e cabelos louros.*/