#include <stdio.h>

int main(){
    int mes;
    do{
        printf("me diga o numero do mes!!");
        scanf("%i" , &mes);

        switch(mes){
            case 1:
            printf("Janeiro");
            break;

            case 2:
            printf("Fevereiro");
            break;

            case 3:
            printf("Marco");
            break;

            case 4:
            printf("Abril");
            break;

            case 5:
            printf("Maio");
            break;

            case 6:
            printf("junho");
            break;

            case 7:
            printf("Julho");
            break;

            case 8:
            printf("Agosto");
            break;

            case 9:
            printf("Setembro");
            break;

            case 10:
            printf("Outubro");
            break;

            case 11:
            printf("Novembro");
            break;

            case 12:
            printf("Dezembro");
            break;

            default:
            printf("Insira um Numero válido por favor\n");
            break;
        }

    }while(mes < 0 && mes > 12); //só se for menor do que zero que funciona direito esse do-while ai

    return 0;
}