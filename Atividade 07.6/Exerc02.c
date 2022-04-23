#include <stdio.h>

main(){
    /*
    2. Escreva um programa que, dada uma matriz de dimensões n x m, imprime a
    matriz transposta desta (de dimensões m x n).
    */
    int Nlinhas, Ncolunas;
    while (1)
    {
        printf("Digite a quantidade de linhas para a matriz:");
        scanf("%d", &Nlinhas);
        printf("Digite a quantidade de colunas para a matriz:");
        scanf("%d", &Ncolunas);
        // Lê o tamanho da matiz
        if (Nlinhas<=100 && Ncolunas<=100)
        {
            break;
        }
        printf("Valor invalido. Digite um valor menor ou igual a 100");
        // Verifica se o valor digitado é possível
    }
    int matriz[Nlinhas][Ncolunas];
    for (int i = 0; i < Nlinhas; i++)
    {
        for (int j = 0; j < Ncolunas; j++)
        {
            printf("Digite o valor para a posicao (%d, %d):", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    // Lê os valores para a matriz
    printf("A matriz eh:\n");
    for (int i = 0; i < Nlinhas; i++)
    {
        for (int j = 0; j < Ncolunas; j++)
        {
            printf("%4d  ", matriz[i][j]);
        }
        printf("\n");
    }
    // Mostra a matriz normal
    printf("A matriz transposta eh: \n");
    for (int i = 0; i < Ncolunas; i++)
    {
        for (int j = 0; j < Nlinhas; j++)
        {
            printf("%4d  ", matriz[j][i]);
        }
        printf("\n");
    }
    // Mostra a matriz transposta
}