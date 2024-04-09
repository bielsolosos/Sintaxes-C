#include <stdio.h>

/*O programa deve solicitar o valor em R$ que será dividido entre três ganhadores de um
concurso. A quantia será dividida da seguinte forma:
O primeiro ganhador receberá 46%;
O segundo receberá 32%;
O terceiro receberá o restante;

3. Calcule e imprima a quantia ganha por cada um dos ganhadores.*/

int main(){
    float Real;

    printf("Insira o valor em R$");
    scanf("%f" , &Real);

    printf("Ganhadores:\n");
    printf("Primeiro Ganhador: R$ %.2f\n" , (Real * 46/100));
    printf("Segundo Ganhador: R$ %.2f\n" , (Real * 32/100));
    printf("Terceiro Ganhador: R$ %.2f\n" , (Real - (Real * 32/100) - (Real * 46/100) ));

    return 0;
}