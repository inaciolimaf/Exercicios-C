#include <stdio.h>

int main(){
    /*
    3. Escreva um programa para determinar se uma sequência de n números
    digitados pelo usuário está ordenado ou não. Faça o programa usando uma
    variável contadora.
    */
    int resp, crescente=0, decrescente=0;
    // Cria as variáveis
    while (1)
    {
        printf("Digite a quantidade de numeros para serem lidos:");
        scanf("%d", &resp);
        if (resp>=3)
        {
            break;
        }
        printf("Valor invalido digite um numero maior ou igual a 3\n");
    }
    // Lê a quantidade de números para serem lidos
    int sequencia[resp];
    // Cria a matriz
    for (int i = 0; i < resp; i++)
    {
        printf("Digite o %d numero: ", i);
        scanf("%d", &sequencia[i]);
    }
    // Lê o valor para a sequência
    for (int i = 0; i < resp-1; i++)
    {
        // O valor de i varia de 0 até resp-1
        if (sequencia[i]<=sequencia[i+1])
        {
            // Se o valor na posição i for menor ou igual ao próximo
            crescente+=1;
            // crescente aumenta em 1
        }
    }
    if (crescente==resp-1)
    {
        printf("Esta ordenada de forma crescente.");
        return 0;
    }
    // Se foi adicionado 1 para crescente em todas as vezes no for, imprima que está ordenado de
    // forma crescente e encerre o programa
    for (int i = 0; i < resp-1; i++)
    {
        // O valor de i varia de 0 até resp-1
        if (sequencia[i]>=sequencia[i+1])
        {
            // Se o valor na posição i for maior ou igual ao próximo
            decrescente+=1;
            // decrescente aumenta em 1
        }
    }
    if (decrescente==resp-1)
    {
        printf("Esta ordenada de forma decrescente.");
        return 0;
    }
    // Se foi adicionado 1 para decrescente em todas as vezes no for, imprima que está ordenado de
    // forma decrescente e encerre o programa
    printf("A sequencia nao esta ordenada.");
    // Se não está crescente nem decrescente, imprima que a sequência não está ordenada
}