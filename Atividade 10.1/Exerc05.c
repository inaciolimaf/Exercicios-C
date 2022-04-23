#include <stdio.h>
#include <math.h>
/*
5) Escreva uma função que escreva o valor (feito o cálculo) do volume de uma
esfera V = 4/ 3π* r3 , em que π = 3.141592. O valor do raio r deve ser passado por
parâmetro.
*/
float esfera(float r){
    return (4*(3.141592)*(pow(r,3)))/3;
    // Retorna o volume da esfera
}
int main(){
    float raio;
    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);
    // Lê o valor do raio
    printf("O valor do volume é %f", esfera(raio));
    // Mostra o valor do volume usando a função
    return 0;
}