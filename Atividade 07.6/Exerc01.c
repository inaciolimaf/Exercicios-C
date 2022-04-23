#include <stdio.h>

main(){
    /*
    1. Escreva um programa que, dada uma matriz quadrada de dimensão n,
    verifica se esta é simétrica ou não.
    */
    int matriz[100][100];
    // O valor máximo da matriz é 100
    int n, esimetrica=1;
    // Cria a variável
    while (1)
    {
        printf("Qual a quantidade de linhas para a matriz?");
        scanf("%d", &n);
        // Lê o tamanho da matiz
        if (n<100)
        {
            break;
        }
        printf("Valor invalido. Digite um valor menor ou igual a 100");
        // Verifica se o valor digitado é possível
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Digite o valor para a posicao (%d, %d):", i, j);
            scanf("%d", &matriz[i][j]);
            // Lê o valor para a matriz
        }
    }
    printf("A matriz eh:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d  ", matriz[i][j]);
            // Mostra o valor da matriz
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j]!=matriz[j][i])
            {
                esimetrica=0;
                // Se a matriz não for simétrica, esimetrica recebe 0
            }
        }
    }
    if (esimetrica==1)
    {
        printf("A matriz eh simetrica.");
    }
    else if (esimetrica==0)
    {
        printf("Não eh simetrica.");
    }
    // Mostra o resultado
}