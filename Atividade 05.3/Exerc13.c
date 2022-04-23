#include <stdio.h>

main(){
    /*
    13. Faça um programa que leia três caracteres (do tipo char) e depois os imprima um em cada
    linha. Use um único comando printf() para isso.
    */
    char carac1, carac2, carac3;
    // Criando três variáveis do tipo char
    scanf("%c %c %c", &carac1, &carac2, &carac3);
    // Lê os 3 valores para as variáveis
    printf("O primeiro valor: %c \nO segundo valor: %c \nO terceiro valor: %c", carac1, carac2, carac3);
    // Imprime os 3 valores em apenas uma linha de código
}