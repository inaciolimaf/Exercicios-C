#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
5) Elabore um programa que leia um arquivo binário contendo 100 números. Mostre
na tela a soma desses números.
*/

int main()
{
    int const quant=10;
    char nomearquivo[40];
    // Cria as variáveis
    printf("Digite o nome do arquivo: ");
    scanf(" %[^\n]s", &nomearquivo);
    FILE *p;
    p=fopen(nomearquivo, "rb");
    // Lê o arquivo com o nome digitado
    int vetor[quant], soma=0;
    for (int i = 0; i < quant; i++)
    {
        fread(&vetor[i], sizeof(int), 1, p);
    }
    // Guada os arquivos no vetor
    printf("Os numeros sao: ");
    for (int i = 0; i < quant; i++)
    {
        printf("%d, ", vetor[i]);
        soma+=vetor[i];
        // Mostra os valores e calcula a soma
    }
    printf("\nA soma dos numeros sao: %d", soma);
    // Mostra a soma
    return 0;
}
