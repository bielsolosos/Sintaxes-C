#include <stdio.h>
    /*Ler uma data de nascimento de uma pessoa fornecida através de três dados inteiros: Dia,
    Mês e Ano. Testar a validade desta data para saber se é uma data válida. Testar se o dia
    fornecido e um dia válido: dia > 0, dia ≤ 28 para o mês de fevereiro (29 se o ano for
    bissexto), dia ≤ 30 em abril, junho, setembro e novembro, dia ≤ 31 nos outros meses. Testar
    a validade do mês: mês > 0 e mês < 13. Testar a validade do ano: ano ≤ ano atual (use uma
    constante definida com o valor igual a 2015). Imprimir: “data válida” ou ”data inválida” no
    final da execução do programa. */

    
int ehbissexto(int Ano){
    if(Ano % 400 == 0 || (Ano % 4 == 0 && !(Ano % 100 == 0) )){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int dia, mes, ano;
    printf("Me diga o dia, mes e ano respectivamente! ");
    scanf("%i %i %i" , &dia, &mes, &ano);

    if(mes == 2){
        if(ehbissexto(ano) == 1){
            if(dia > 0 && dia <= 29){
                printf("data válida\n");
                return 0;
            }
            else{
                    printf("data invalida\n");
                    return 0;
                } 
        }
        else if (ehbissexto(ano) == 0){
                if(dia > 0 && dia <= 28){
                    printf("data válida\n");
                    return 0;
                }
                else{
                    printf("data invalida\n");
                    return 0;
                } 
        }
    }

    if(mes == 4 || mes == 6 || mes == 8 || mes == 9 || mes == 10 || mes == 11 ){
        if( dia > 0 && dia <= 30){
            printf("data válida\n");
            return 0;
        }
        else{
            printf("data invalida\n");
            return 0;
        }
    }
    else{
        if(dia > 0 && dia <= 31){
            printf("data válida\n");
            return 0;
        }
        else{
            printf("data invalida\n");
            return 0;
        }
    }
}