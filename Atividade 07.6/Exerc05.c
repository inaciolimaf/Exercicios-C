#include <stdio.h>

#define tamanho 20
// Define a macro com o valor 20
int main(){
    /*
    5. Escreva um programa que exiba uma matriz quadrada com as diagonais
    principal e secundária preenchidas com 1 e os demais valores com 0.
    Desenvolva seu programa para poder variar o tamanho da matriz de acordo
    com o valor de uma macro definida para estabelecer os tamanhos das
    dimensões.
    */
    int matriz[tamanho][tamanho];
    // Cria a matriz usando a macro
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (i==j || i+j==tamanho-1)
            {
                // Se a linha for igual a coluna ou a linha mais a coluna for igual a tamanho-1
                matriz[i][j]=1;
                // A matriz recebe o valor 1
            }
            else
            {
                // Senão recebe o valor 0
                matriz[i][j]=0;
            }
        }
    }
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf(" %4d", matriz[i][j]);
        }
        printf("\n");
    }
    // Mostra o valor da matriz
}