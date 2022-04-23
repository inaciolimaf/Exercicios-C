#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
4) Faça um programa que leia 100 números. Esse programa deverá, em seguida,
armazenar esses números em um arquivo binário.
*/

int main()
{
    int const quant=10;
    int num[quant];
    char nomearquivo[40];
    // Cria as variáveis
    for (int i = 0; i < quant; i++)
    {
        printf("Digite o numero para a posicoo %d: ", i+1);
        scanf("%d", &num[i]);
    }
    printf("O resultado eh: \n");
    for (int i = 0; i < quant; i++)
    {
        printf("O numero na posicao %d eh: %d\n", i+1, num[i]);
    }
    // Lê o vetor e mostra o resultado
    FILE *p;
    printf("Digite o nome do arquivo para ser criado: ");
    scanf(" %[^\n]s", &nomearquivo);
    p=fopen(nomearquivo, "wb");
    if (p==NULL)
    {
        printf("Não foi possível criar o arquivo");
    }
    else
    {
        printf("Arquivo criado com sucesso");
    }
    // Cria um arquivo com nome digitado
    fwrite(&num, sizeof(num), 1, p);
    // Coloca no arquivo o vetor num
    fclose(p);
    return 0;
}
