#include <stdio.h>

main(){
    /*
    4 - Escreva um programa que receba/leia um número inteiro do usuário e informe se esse
    número é “Par” ou “Ímpar”.
    */
    int valor;
    // Cria a variável valor
    printf("Digite um numero:");
    scanf("%d", &valor);
    // Pede o segundo número
    if (valor%2==0){
        printf("O numero eh par.");
        // Se o valor do resto da divisão por 2 for 0 imprima "O numero é par."
    }
    else{
        printf("O numero eh impar.");
        // Senão, imprima "O numero é impar."
    }
}