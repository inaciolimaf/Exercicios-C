#include <stdio.h>

main(){
    int matriz[4][4], MatTrian[4][4];
    // Cria a matriz
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
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i<j)
            {
                // Se o valor da linha for maior que o da coluna, está acima da diagonal principal,
                MatTrian[i][j]=0;
                // Então a matriz trinangular recebe valor 0
            }
            else
            {
                MatTrian[i][j]=matriz[i][j];
                // Senão recebe o valor da matriz digitada
            }
        }
    }
    // Cria a matriz triangular
    printf("A matriz triangular eh: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %4d", MatTrian[i][j]);
        }
        printf("\n");
    }
    // Mostra a matriz triangular
}