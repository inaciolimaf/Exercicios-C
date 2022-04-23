#include <stdio.h>

main(){
    /*
    9. Faça um programa que leia dois valores do tipo float. Use um único comando de leitura 
    para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos.
    */
    float valor1, valor2;
    // Cria duas variável valor do tipo float
    printf("Didite dois valores:");
    // Pede dois valores
    scanf("%f %f", &valor1, &valor2);
    // Lê os dois valores digitados
    printf("Os valores digitados foram: %f e %f", valor2, valor1);
    // Imprime o valores digitados na ordem inversa a que foram lidos
}
