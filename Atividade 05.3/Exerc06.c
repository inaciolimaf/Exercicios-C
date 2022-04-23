#include <stdio.h>

main(){
    /*
    6. Elabore um programa que leia um caractere e depois o imprima 3 vezes: como um valor
    inteiro decimal, como um inteiro octal e como um hexadecimal.
    */
    char valor;
    // Cria a variável valor do tipo char para ler um caractere
    printf("Digite um caractere:");
    // Pede o valor
    scanf("%c", &valor);
    //Ler um valor digitado usando o %c para char
    printf("Valor lido: %c\n", valor);
    // Mostra o valor na tela o valor usando o %c para mostrar o valor digitado
    printf("Valor lido em inteiro decimal: %d\n", valor);
    // Imprimi em decimal
    printf("Valor lido em inteiro octal: %o\n", valor);
    // Imprimi em octal
    printf("Valor lido em inteiro hexadecimal: %X\n", valor);
    // Imprimi em hexadecimal
}