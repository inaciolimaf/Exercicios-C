#include <stdio.h>

int main(){
    /*
    4. Escreva um programa que leia 2 matrizes (A e B, lendo ainda os “tamanhos
    desejados” para A e B, antes da leitura de seus elementos) onde tais matrizes
    devem ser compatíveis para a multiplicação de A x B, ou seja, o número de
    colunas de A é igual ao número de linhas de B. Por fim, faça a multiplicação
    de A por B, informando o resultado ao final.
    */
    int NLinhasA, NColunasA, NLinhasB, NColunasB, MatAuxi=0;
    // Cria as variáveis
    while (1)
    {
        printf("Digite a quantidade de linhas de A:");
        scanf("%d", &NLinhasA);
        printf("Digite a quantidade de colunas de A:");
        scanf("%d", &NColunasA);
        printf("Digite a quantidade de linhas de B:");
        scanf("%d", &NLinhasB);
        printf("Digite a quantidade de colunas de B:");
        scanf("%d", &NColunasB);
        //Pede o valores para as variáveis
        if (NColunasA==NLinhasB)
        {
            // Se o valores digitados forem possíveis
            break;
            // Saia do laço
        }
        // Senão, imprima uma mensagem de erro e faça denovo o laço
        printf("Valores inválidos, o número de colunas de A deve o mesmo que o número de linhas de B");
    }
    int A[NLinhasA][NColunasA], B[NLinhasB][NColunasB], MatMultip[NLinhasA][NColunasB];
    // Declara as matrizes
    for (int i = 0; i < NLinhasA; i++)
    {
        for (int j = 0; j < NColunasA; j++)
        {
            printf("Digite o valor da matriz A na posicao (%d, %d):", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    // Pede os valores para A
    for (int i = 0; i < NLinhasB; i++)
    {
        for (int j = 0; j < NColunasB; j++)
        {
            printf("Digite o valor da matriz B na posicao(%d, %d): ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    // Pede os valores para B
    printf("A string A eh: \n");
    for (int i = 0; i < NLinhasA; i++)
    {
        for (int j = 0; j < NColunasA; j++)
        {
            printf(" %4d", A[i][j]);
        }
        printf("\n");
    }
    // Imprime A
    printf("A string B eh: \n");
    for (int i = 0; i < NLinhasB; i++)
    {
        for (int j = 0; j < NColunasB; j++)
        {
            printf(" %4d", B[i][j]);
        }
        printf("\n");
    }
    // Imprime B
    for (int i = 0; i < NLinhasA; i++)
    {
        for (int j = 0; j < NColunasB; j++)
        {
            for (int k = 0; k < NColunasB; k++)
            {
                MatAuxi += A[i][k]*B[k][j];
            }
            MatMultip[i][j]=MatAuxi;
            // Calcula os valores de MatAuxi e adiciona na matriz MatMultip
            MatAuxi=0;
            // MatAuxi recebe o valor 0
        }
    }
    printf("A multiplicação das duas strings é: \n");
    for (int i = 0; i < NLinhasB; i++)
    {
        for (int j = 0; j < NColunasB; j++)
        {
            printf(" %4d", MatMultip[i][j]);
        }
        printf("\n");
    }
    // Mostra a string multiplicada
}