#include <stdio.h>

int main(){
    int num = 122;
    printf("%i\n", num);
    printf("%p", &num);
    // Vou utilizar aqui de caderno pois não possuo um de C
    //esse %p é onde é recebido um "pointer" que é uma Variável com o & incluído
    // é o grande diferencial de C, os ponteiros são onde são armazenados a memória da Variável em nosso computador
    //Utilidade? Simples eles podem aprimorar a performace de nosso programa, que é o que torna a linguagem C mais RAPIDA.
    
    return 0;
}