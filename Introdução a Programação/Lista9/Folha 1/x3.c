// Escreva um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra.
// Se a letra for A o procedimento calcula a média aritmética!
/// e se for P a média ponderada com os pesos 5, 3 e 2.

#include <stdio.h>
#include <math.h>

double calcula_media_normal(double nota1, double nota2, double nota3)
{
    return ((nota1 * nota2 * nota3) / 3);
}

double calcula_media_ponderada(double nota1, double nota2, double nota3)
{
    nota1 *= 5;
    nota2 *= 3;
    nota3 *= 2;

    return ((nota1 * nota2 * nota3) / (5 + 3 + 2));
}


//Uma função que coloca sempre o P ou o A em maiúsculo para a verificação abaixo
void ehPonderadaOuAritmetica(char *c){
    if( *c == 'P') *c = 'P';
    else if( *c == 'p') *c = 'P';
    else if( *c == 'A') *c = 'A';
    else if( *c == 'a') *c = 'A';

    else *c = 'f';

}

// Main
int main()
{
    double nota1, nota2, nota3;
    char ponderadaOuAritmetica;

    printf("Informe se você quer média ponderada ou aritmética ");
    scanf("%c", &ponderadaOuAritmetica);
    
    ehPonderadaOuAritmetica(&ponderadaOuAritmetica);

    //tratamento de erros, pois a função acima vai sempre fazer ser f logo sempre que digitar algo diferente de F faz desse jeito
    if(ponderadaOuAritmetica == 'f') {
        printf("Opção inválida. \n");
        return 0;
    }

    printf("Insira os 3 números para calcular a média\n");
    scanf("%i %i %i", &nota1, &nota2, &nota3);

    if (ponderadaOuAritmetica == 'P')
    {
        printf("A média Ponderada eh: %lf \n", calcula_media_normal(2, 2, 2));
    }
    else if (ponderadaOuAritmetica == 'A')
    {
        printf("A média aritimética eh: %lf \n", calcula_media_ponderada(2, 2, 2));
    }

    return 0;
}
