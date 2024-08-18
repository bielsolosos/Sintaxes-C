#include <stdio.h>
#include <stdlib.h>

//Essa aqui é uma função diretamente ligada

//fazer com a parada de ponteiros!!!
void numPares(int n) {

    for(int i = 0; i <= n; i++){
      if( i % 2 == 0){
        //Código simples!
        printf("%i ", i);
      }

    }

    printf("\n");
}


int main(){

  int n = 0;
  printf("Digite até que número você quer imprimir!");
  scanf("%i", &n);

  //Chamando a função de boassas aqui!  
  numPares(n);
  //numPares(1000);
  //numPares(3);

  return 0;
}
