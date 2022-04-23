#include <stdio.h>
#include <math.h>

/*
4) Escreva uma função que receba por parâmetro a altura e o raio de um cilindro
circular e retorne o volume desse cilindro. O volume de um cilindro circular é
calculado por meio da seguinte fórmula: V = π * raio2 * altura, em que π =
3.141592
*/

float cilimdro(int altura, int raio){
    return altura*pow(raio,2)*3.141592;
    // Retorna o volume do cilimdro
}
int main(){
    int alt, raio;
    printf("Digite a altura do cilimdro:");
    scanf("%d", &alt);
    printf("Digite o raio do cilimdro:");
    scanf("%d", &raio);
    // Lê o valor do raio e da altura
    printf("O volume do cilindro é %.2f", conversor(alt, raio));
    // Mostra o valor do volume do cilimdro usando a função
}