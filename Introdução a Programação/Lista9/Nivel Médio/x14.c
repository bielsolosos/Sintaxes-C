// 14. Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhas com
// pontos de exclamação, conforme o exemplo abaixo (para n = 5):
#include <stdio.h>

// função que printa as esclamações e pula a linha!
void printArvore(int numEsclamacoes)
{
    char esclamacao = '!';
    for (int i = 1; i <= numEsclamacoes; i++)
    {
        printf("%c", esclamacao);
    }
    printf("\n");
}

// Função que será chamada para printar a Arvore
void printarArvoreDireito(int numArvore)
{
    int i = 1;
    for (i; i <= numArvore; i++)
    {
        printArvore(i);
    }

    printf("\n");
}

int main()
{
    int numArvore = 0;
    printf("Escreva qual o número da arvore que você quer imprimir: \n");

    scanf("%i", &numArvore);

    printarArvoreDireito(numArvore);

    return 0;
}