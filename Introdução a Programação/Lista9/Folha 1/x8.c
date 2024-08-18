// Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S.
#include <stdio.h>

float calculaValor(double *n)
{
    //Acho que essa lógica está errada, pretendo revisar isso antes de enviar ao professor
    //se eu esqueci peço desculpas cristiano
    double resultado = 0.0;
    for (int i = *n; i <= *n; i++)
    {
        resultado += (1.0 / i) ;
    }

    *n = resultado;
}

int main()
{
    
    double pergunta = 10.0;

    calculaValor(&pergunta);

    printf("será q deu certo? %lf\n" , pergunta);

    return 0;
}
