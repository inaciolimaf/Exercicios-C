#include <stdio.h>

/*
6) Escreva uma função que receba o peso (em quilos) e a altura (em metros) de uma
pessoa e calcule e retorne o IMC (índice de massa corporal) dessa pessoa: IMC =
peso/(altura * altura)
*/

float imc(float peso, float altura){
    return peso/(altura * altura);
    // Retorna o valor do IMC
}
int main(){
    float peso, altura;
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    // Lê o valor do peso e altura
    printf("O IMC eh %.2f", imc(peso, altura));
    // Mostra o valor do IMC usando a função
}