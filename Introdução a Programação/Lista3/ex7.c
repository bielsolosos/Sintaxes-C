/* No país de Brasilândia a moeda nacional é a merreca (M$). Sabe-se que sistema monetário de
Brasilândia só utiliza moedas (não utiliza cédulas) e que os valores dos diferentes tipos de moeda
são: M$ 1,00; M$ 5,00; M$ 10,00; M$ 50,00 e M$ 100,00.
Devido ao acúmulo de moedas por parte dos brasilândios, o Governo resolveu abrir uma
concorrência internacional para o desenvolvimento de um software. Dado um valor em
merreca, o programa deve calcular qual o número mínimo de moedas necessárias para
perfazer o valor especificado.
Exemplo: Se o valor informado for M$ 187,00, a saída de programa deve ser:
1 moeda(s) de M$ 100,00
1 moeda(s) de M$ 50,00
3 moeda(s) de M$ 10,00
1 moeda(s) de M$ 5,00
2 moeda(s) de M$ 1,00 */

#include <stdio.h>

int main(){
    int Entrada;
    int cem, cinquenta, dez, cinco, um;
    //país esquisito sem moedas!
    printf("Me diga quanto recebeu\n");
    scanf("%i" , &Entrada);

    if(Entrada > 100){
        while(Entrada > 100){
            cem++;
            Entrada -= 100;
        }
    }
    
    if(Entrada > 50){
        while(Entrada > 50){
            cinquenta++;
            Entrada -= 50;
        }
    }

    if(Entrada > 10){
        while(Entrada > 10){
            dez++;
            Entrada -= 10;
        }
    }

    if(Entrada > 5){
        while(Entrada > 5){
            cinco++;
            Entrada -= 5;
        }
    }

    while(Entrada > 0){
        while(Entrada > 0){
            um++;
            Entrada -= 1;
        }
    }

    printf("Moedas:\n");
    printf("%i moeda(s) de M$100,0\n", cem);
    printf("%i moeda(s) de M$50,0\n", cinquenta);
    printf("%i moeda(s) de M$10,0\n", dez);
    printf("%i moeda(s) de M$5,0\n", cinco);
    printf("%i moeda(s) de M$1,0\n", um);

    

    return 0;
}