#include <stdio.h>

/*
7) A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de
Fibonacci. Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma
dos 2 anteriores. Ou seja, para calcular o N-ésimo termo desta série (com N>=1),
temos que fibonacci(N) = 0, se N = 1; fibonacci(N) = 1, se N = 2; e fibonacci(N) =
fibonacci(N-1) + fibonacci(N-2), se N > 1; Escreva um algoritmo que contenha uma
função recursiva que calcule o N-ésimo termo desta série (N>=1), então implemente
um programa que leia um inteiro N (N < 46) e mostre os N primeiros números dessa
série, usando a função implementada.
*/

int fibonacci(int n){
    int num;
    if (n == 1) {
        return(0);
        // Se o valor de n for 1 retorna 0
    }

    if (n == 2) {
        return(1);
        // Se o valor de n for 1 retorna 0
    }
    num = fibonacci(n-1) + fibonacci(n-2);
    // Calcula o Fibonacci pela recursividade
    return(num);
    // Retorna num
}
int main(){
    int nfib;
    printf("Digite a quantidade de valores para a sequencia de Fibonacci: ");
    while (1)
    {
        scanf("%d", &nfib);
        if (nfib<46 && nfib>=0)
        {
            break;
        }
        printf("Valor inválido. Tente novamente.");
    }
    // Lê o valor de nfib
    printf("A sequencia eh: ");
    for (int i = 1; i <= nfib; i++)
    {
        printf("%d, ", fibonacci(i));
        // Mostra a sequência usando a função
    }
}