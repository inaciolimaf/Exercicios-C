#include <stdio.h>

main(){
    /*
    7 - Faça um programa para ler dois números inteiros A e B e informar se “A é divisível
por B”.
    */
    int A, B;
    // Cria duas variáveis do tipo int
    printf("Digite o primeiro valor:");
    scanf("%d", &A);
    printf("Digite o segundo valor:");
    scanf("%d", &B);
    // Pede os dois valores
    if (A%B==0){
        printf("%d eh divisivel por %d", A, B);
        // Se A for divisível por B imprima "A eh divisivel por B"
    }
    else{
        printf("%d nao eh divisivel por %d", A, B);
        // Senão, imprima "A nao eh divisivel por B"
    }
}