#include <stdio.h>

main(){
    /*
    14. Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-as de
    três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma em
    cada linha. Use um único comando printf() para cada operação de escrita das três variáveis.
    */
    char caractere;
    int inteiro;
    float real;
    // Declara as 3 variáveis
    printf("Digite um caractere:");
    scanf("%c", &caractere);
    printf("Digite um numero inteiro:");
    scanf("%d", &inteiro);
    printf("Digite um numero real:");
    scanf("%f", &real);
    // Pede e lê os 3 valores

    // Separadas por espaços:
    printf("Representacao separadas por espacos:\n");
    printf("%c %d %f", caractere, inteiro, real);

    // Por uma tabulação horizontal:
    printf("\nRepresentacao por uma tabulacao horizontal:\n");
    printf("%c\t%d\t %f", caractere, inteiro, real);

    // Uma em cada linha
    printf("\nRepresentacao uma em cada linha:\n");
    printf("%c\n%d\n %f", caractere, inteiro, real);
}