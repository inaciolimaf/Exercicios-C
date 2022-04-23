#include <stdio.h>
#include <stdlib.h>

/*
1) Crie um programa para ler, calcular (contar) e exibir o número de palavras
contidas em um arquivo texto. O usuário deverá informar o nome do arquivo.
*/

int main(){
    FILE *p;
    char nome[40], carac;
    int quant=0;
    scanf("%s", nome);
    p=fopen(nome, "r");
    // Lê o arquivo
    if (p==NULL)
    {
        printf("Arquivo nao existe");
        exit(1);
    }
    // Mostra se o arquivo não existir e sai do programa
    while (carac!=EOF)
    {
        // Passa pelos caracteres do arquivo de texto
        carac=getc(p);
        if (carac==' '|| carac=='\n')
        {
            // Se o caractere for espaço ou quebra de linha 
            quant+=1;
            // A quantidade aumenta em 1
        }
    }
    printf("%d", quant+1);
    // Imprime a quantidade
    return 0;
}