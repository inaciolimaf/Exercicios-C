#include <stdio.h>

/*
3) Escreva uma função que receba por parâmetro uma temperatura em graus
Fahrenheit e a retorne convertida em graus Celsius. A fórmula de conversão é: C =
(F – 32.0) * (5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em
Celsius.
*/

int conversor(F){
    return (F - 32.0) * (5.0/9.0);
    // Cria a função que retorna o valor convertido
}
int main(){
    int F;
    printf("Digite a temperatura em Fahrenheit:");
    scanf("%d", &F);
    // Lê a temperatura em Fahrenheit
    printf("Em graus Celsius é %d", conversor(F));
    // Mostra o valor convertido
    return 0;
}