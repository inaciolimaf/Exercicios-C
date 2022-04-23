#include <stdio.h>

main(){
    /*
    7. Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em
    que eles foram lidos.
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
    printf("O segundo valor digitado foi: %d\n", valor2);
    // Mostra o segundo valor digitado
    printf("O primeiro valor digitado foi: %d\n", valor1);
    // Mostra o primeiro valor digitado 
}