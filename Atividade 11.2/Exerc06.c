#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
6) Faça um programa que leia um valor (número) inteiro positivo N. Então, crie um
vetor de N inteiros, onde cada posição deste vetor deve ser ocupada por um número
inteiro entre 0 e N. Esse programa deverá, em seguida, armazenar esse vetor de
números inteiros em um arquivo binário. Quando o programa for executado e o
arquivo já existir, o seu conteúdo deverá ser exibido, antes de ser sobrescrito.
*/

int main()
{
    int NumLer, MostrarNum;
    FILE *p;
    p=fopen("numeros.bin", "rb");
    if (p!=NULL)
    {
        // Se o arquivo existir
        printf("Mostrando o valor do arquivo: \n");
        fread(&NumLer, sizeof(int), 1, p);
        // Lê o primeiro número do arquivo, que registra quantos numeros foram guardados
        for (int i = 0; i < NumLer; i++)
        {
            fread(&MostrarNum, sizeof(int), 1, p);
            printf("%d\n", MostrarNum);
            // Mostrar os números que estão dentro do arquivo
        }
        fclose(p);
    }
    printf("\n");
    printf("Criando um novo arquivo: \n");
    FILE *f;
    f=fopen("numeros.bin", "wb");
    // Cria um novo arquivo
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &NumLer);
    // Lê a quantidade de números para colocar no arquivo
    fwrite(&NumLer, sizeof(NumLer), 1, f);
    // Coloca esse número no arquivo
    int  vetor[NumLer];
    // Cria um vetor com essa quantidade de números
    for (int i = 0; i < NumLer; i++)
    {
        vetor[i]=i;
    }
    // Preenche o vetor
    for (int i = 0; i < NumLer; i++)
    {
        fwrite(&vetor[i], sizeof(int), 1, f);
    }
    // Coloca o vetor dentro do arquivo
    fclose(f);
    return 0;
}
