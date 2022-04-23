#include <stdio.h>

main(){
    /*
    8. Faça um programa que leia dois números, exiba-os e, em seguida, troque os valores das duas
variáveis que receberam tais números, usando apenas as 2 variáveis (sem usar variável
auxiliar) para a troca dos valores, exibindo os valores das 2 variáveis novamente.
    */
    int valor1, valor2;
    // Cria duas variável valor do tipo int
    printf("Digite o primeiro valor:");
    // Pede o primeiro valor
    scanf("%d", &valor1);
    // Lê o primeiro valor digitado
    printf("Digite o segundo valor:");
    // Pede o segundo valor
    scanf("%d", &valor2);
    // Lê o segundo valor digitado
    printf("Os valores digitados foram: %d, %d\n", valor1, valor2);
    // Mostra as duas variáveis antes da modificação
    valor1=valor1+valor2;
    valor2=valor1-valor2;
    valor1=valor1-valor2;
    // Faz as alterações nas variáveis
    printf("Os valores digitados foram: %d, %d\n", valor1, valor2);
    // Mostra as duas variáveis novamente depois da modificação
}