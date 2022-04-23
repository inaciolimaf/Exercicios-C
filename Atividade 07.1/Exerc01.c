#include <stdio.h>

main()
{
    /*
    1 - Faça um programa que leia um conjunto de n (n deve ser informado pelo
    usuário) números inteiros e, ao final, informe quais são pares e quais são ímpares.
    */
    int tam, resp, QuantImpares=0, QuantPares=0;
    printf("Digite a quantidade de numeros para serem lidos:");
    scanf("%d", &tam);
    // Pede o tamanho para os vetores
    int VetPares[tam], VetImpares[tam];
    // Cria os vestores
    for (int i = 1; i <= tam; i++)
    {
        // O i varia de 1 até o valor digitado
        scanf(" %d", &resp);
        // Lê um valor
        if (resp%2==0)
        {
            // Se resp for par, então
            VetPares[QuantPares]=resp;
            // VetPares na posição QuantPares(que começa com 0) recebe o valor de resp
            QuantPares+=1;
            // Aumente em 1 o QuantPares
        }
        else
        {
            // Senão
            VetImpares[QuantImpares]=resp;
            // VetImpares na posição QuantImpares(que começa com 0) recebe o valor de resp
            QuantImpares+=1;
            // Aumente em 1 o QuantImpares
        }
    }
    printf("Os valores pares sao:");
    for (int i = 0; i < QuantPares; i++)
    {
        printf(", %d", VetPares[i]);
    }
    // Imprime o valor de VetPares
    printf(".\n");
    printf("Os valores impares sao:");
    for (int i = 0; i < QuantImpares; i++)
    {
        printf(", %d", VetImpares[i]);
    }
    printf(".");
    // Imprime o valor de VetÍmpares
}
