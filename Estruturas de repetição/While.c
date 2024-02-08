#include <stdio.h>
int main()
{
    int Contador = 0, Pulinho = 50;
    while(Contador != 200)
    {
        printf("O meu Coelhinho agora Deu %i Pulinhus!!!!\n",Pulinho);
        Contador++;
        Pulinho = Pulinho + 50;
    }
    return 0;
}

