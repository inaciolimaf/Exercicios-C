#include <stdio.h>

main(){
    int matriz[4][4], X, cont=0;
    // Cria a matrize e as outrs variáveis
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o valor para a matriz na posicao (%d, %d):", i, j);
            scanf("%d", &matriz[i][j]);
            // Lê o valor para a matriz
        }
    }
    printf("A matriz original eh:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%4d  ", matriz[i][j]);
            // Mostra o valor da matriz
        }
        printf("\n");
    }
    printf("Digite o valor a ser encontrado:");
    scanf("%d", &X);
    // Lê o valor de X
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matriz[i][j]==X)
            {
                cont+=1;
                printf("Valor encontrado na posicao (%d, %d)\n", i, j);
                // Se o valor da matriz na posição i e j for igual a x, aumenta o contador em 1
                // e mostra a posição onde foi encontrado
            }
        }
    }
    if (cont==0)
    {
        printf("Valor nao encontrado\n");
    }
    else
    {
        printf("Valor entrado %d vezes\n", cont);
    }
    // Se o valor de cont for igual 0, inprima que o valor não foi enocntrado
    // Senão, mostra o valor de cont
}