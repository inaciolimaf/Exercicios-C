#include <stdio.h>

main(){
    /*
    12. Faça um programa que leia um caractere (do tipo char) e depois o imprima entre aspas
    duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”.
    */
    char caractere;
    // Criando uma variável do tipo char
    scanf("%c", &caractere);
    // Pede o valor para a variável caractere
    printf("\"%c\"", caractere);
    // Imprime o valor de caractere entre aspas
}