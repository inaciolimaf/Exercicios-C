#include <stdio.h>

main()
{
    /*
    5 - Faça um programa que receba um número N do usuário e imprima os N
    primeiros termos da seguinte série: 1, 5, 9, 13, 17, 21, ...
    */
    int resp;
    // Criando a variável resp, para ser a resporta do usuário
    printf("Digite a quantidade de elementos da sequencia a serem mostrados:");
    scanf("%d", &resp);
    // Lê o valor digitado
    for (int i = 1; i <4*resp+1; i=i+4)
    {
        // O valor de i varia de 1 até o valor da sequência na posição digitada, aumentando em 4 a cada passo
        printf("%d\n", i); 
        // Mostra o valor de i    
    }  
}
