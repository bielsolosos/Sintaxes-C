//.Faça uma função que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela no formato
// textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de 2000.

#include <stdio.h>

//imprime a a data convertida!!!
void converteTexto(int dia, int mes, int ano)
{
    char *mesTexto;

    switch (mes)
    {
    case 1:
        mesTexto = "janeiro";
        break;

    case 2:
        mesTexto = "fevereiro";
        break;

    case 3:
        mesTexto = "março";
        break;

    case 4:
        mesTexto = "abril";
        break;

    case 5:
        mesTexto = "maio";
        break;

    case 6:
        mesTexto = "junho";
        break;

    case 7:
        mesTexto = "julho";
        break;

    case 8:
        mesTexto = "agosto";
        break;

    case 9:
        mesTexto = "setembro";
        break;

    case 10:
        mesTexto = "outubro";
        break;

    case 11:
        mesTexto = "novembro";
        break;

    case 12:
        mesTexto = "dezembro";
        break;

    default:
        break;
    }

    printf("A data é: %i de %s de %i \n", dia, mesTexto, ano);
}

int main()
{
    int dia, mes, ano;
    printf("Digite separado por barras a data que você gostaria de imprimir! (Ex:01/01/2000)\n");
    scanf("%i/%i/%i", &dia, &mes, &ano);

    converteTexto(dia, mes, ano);

    return 0;
}