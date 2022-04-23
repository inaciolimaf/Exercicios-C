#include <stdio.h>

main(){
    /*
    2 - Dado que a expressão (char) seguida por um valor inteiro faz a conversão deste
    valor inteiro para um caracter, faça um programa que apresente todos os caracteres
    legíveis (ou “imprimíveis”) da tabela ASCII, ou seja, da posição 32 a 255.
    */
    for (int i = 32; i < 255; i++)
    {
        // O i varia de 32 até 255
        printf("%c\n", i);        
        // Mostra o caractere na posição i
    }
}