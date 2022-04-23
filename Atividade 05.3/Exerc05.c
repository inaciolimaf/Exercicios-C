#include <stdio.h>

main(){
    /*
    5. Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação
    científica.
    */
    double valor;
    // Cria a variável valor do tipo double
    printf("Digite um numero:");
    // Pede um valor
    scanf("%lf", &valor);
    //Ler um valor digitado usando o %lf para double
    printf("Valor lido: %e", valor);
    // Mostra o valor na tela o valor usando o %e para valor em notação científica
    
}