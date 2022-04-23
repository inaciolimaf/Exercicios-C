#include <stdio.h>

main(){
    /*
    3. Faça um programa que leia um número inteiro e depois o imprima usando o operador “%f”.
    Descreva o que aconteceu.
    */
    int valor=0;
    // Cria a variável valor do tipo int
    printf("Digite um numero:");
    // Pede um número
    scanf("%d", &valor);
    //Ler um valor digitado
    printf("Valor lido: %f", valor);
    // Mostra o valor na tela
    
    /* Explicação:
    Nesse caso é imprimido na tela o valor 0.000000 independente do valor digitado
    Isso acontece porque um valor do tipo int é imprimido como um float
    */
}