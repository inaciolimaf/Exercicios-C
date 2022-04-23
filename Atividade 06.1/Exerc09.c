#include <stdio.h>

main(){
    /*
    9 - Dados três tamanhos de segmentos de reta a, b e c, se a+b>c e a+c>b e b+c>a, estes
    segmentos de reta podem formar um triângulo. Faça um programa que, dados os valores
    dos tamanhos dos segmentos de reta a, b e c, verificar / informar se formam (podem
    formar) ou não um triângulo. Além disso, se forma um triângulo, classifique o triângulo
    como: “Equilátero”, “Isósceles” ou “Escaleno”.
    */
    int A, B, C;
    // Cria as 3 variáveis inteiras
    printf("Digite os tamanho dos 3 lados de um possivel triangulo:\n");
    printf("Primeiro valor:");
    scanf("%d", &A);
    printf("Segundo valor:");
    scanf("%d", &B);
    printf("Terceiro valor:");
    scanf("%d", &C);
    // Lê os 3 valores
    if(A+B>C && A+C>B && B+C>A){
        printf("Esses valores formam um triangulo ");
        // Imprime se os valores formarem um triângulo
        if(A==B && B==C){
            printf("equilatero.");
        }
        else if(A==B || B==C || C==A){
            printf("isoceles."); 
        }
        else{
            printf("escaleno.");
        }
        //Imprime o tipo do triângulo
    }
    else{
        printf("Esses valores nao formam um triangulo");
        // Imprime se os valores não forem triângulos
    }
}