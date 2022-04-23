#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
3) Crie um programa que leia um arquivo binário contendo uma quantidade qualquer
de números. O primeiro número lido indica quantos valores existem no arquivo.
Mostre na tela o maior e o menor valor lido.
*/

int main()
{
    int resp, numleitura, num, maior=0, menor=0;
    char nomearquivo[40];
    // Cria as variaveis
    printf("Deseja ler(1) um arquivo ou criar outro (2):");
    while (1)
    {
        scanf("%d", &resp);
        if (resp==1||resp==2)
        {
            break;
        }
        printf("Valor inválido. Tente novamente.\n");
    }
    // Lê o valor de resp
    if (resp==2)
    {
        // Se o valor de resp for 2, é preciso criar um novo arquivo
        printf("Digite o nome do arquivo: ");
        scanf(" %[^\n]s", &nomearquivo);
        FILE *p;
        p=fopen(nomearquivo, "wb");
        if (p==NULL)
        {
            printf("Nao foi possível criar o arquivon\n");
            exit(1);
        }
        else
        {
            printf("Arquivo criado com sucesso\n");
        }
        // Abre o arquivo com o nome digitado pelo usuário
        printf("Guardar quantos valores: ");
        scanf("%d", &numleitura);
        // Lê a quantidade de números para serem lidos
        fwrite(&numleitura, sizeof(numleitura), 1, p);
        // Guarda esse valor no arquivo
        for (int i = 0; i < numleitura; i++)
        {
            printf("Digite o %d valor: ", i+1);
            scanf("%d", &num);
            fwrite(&num, sizeof(num), 1, p);
            // Lê número por número e guarda no arquivo
        }
        fclose(p);
    }
    else if (resp==1)
    {
        printf("Digite o nome do arquivo para ler: ");
        scanf("%s", &nomearquivo);
        FILE *p;
        p=fopen(nomearquivo, "rb");
        // Lê o arquivo com o nome digitado pelo usuário
        fread(&numleitura, sizeof(numleitura), 1, p);
        // Lê o primeiro valor do binário e armazena em numleitura
        int vetor[numleitura];
        for (int i = 0; i < numleitura; i++)
        {
            fread(&vetor[i], sizeof(int), 1, p);
        }
        // Lê os valores do arquivo e atribui ao vetor
        fclose(p);
        for (int i = 0; i < numleitura; i++)
        {
            if (i==0)
            {
                menor=vetor[i];
            }
            if (vetor[i]>maior)
            {
                maior=vetor[i];
            }
            if (vetor[i]<menor)
            {
                menor=vetor[i];
            }
        }
        printf("O maior valor eh %d e o menor eh %d", maior, menor);
        // Calula o menor e maior, e imprime o resultado
    }
    return 0;
}
