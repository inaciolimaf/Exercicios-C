#include <stdio.h>

main(){
    /*
    4. Faça um programa que leia um valor do tipo float e depois o imprima usando o operador
    “%d”. Descreva o que aconteceu.
    */
    float valor=0;
    // Cria a variável valor do tipo float
    printf("Digite um numero:");
    // Pede um número
    scanf("%f", &valor);
    //Ler um valor digitado
    printf("Valor lido: %d", valor);
    // Mostra o valor na tela
    
    /* Explicação:
    Nesse caso é imprimido na tela um valor diferente do digitado, o valor imprimido depende
    do valor digitado.
    Isso acontece porque um valor do tipo float é impresso como um do tipo int.

    Alguns valores possíveis para serem imprimidos são:
    0, para quando é digitado um número inteiro
    1073741824, para 4.62, por exemplo.
    -1073741824, para 4.95, por exemplo.
    -1610612736, para 6.15, por exemplo.
    */
}