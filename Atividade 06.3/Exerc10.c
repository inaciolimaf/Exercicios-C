#include <stdio.h>

main(){
    /*
    10 - Faça um programa para calcular o fatorial de um número digitado pelo usuário.
    */
    double num, fatorial=1;
    /*
    Cria as variáveis:
    num: Para o número digitado.
    fatorial: Para o cálculo do fatorial
    */
    printf("Digite o número para calcular o fatorial:");
    scanf("%lf", &num);
    //Lê o fatorial
    for (int i = 1; i <=num; i++)
    {
        // O i varia de 1 até num, com o aumento de 1 cada passo
        fatorial=fatorial*i;
        // Calcula o fatorial
    }
    printf("%lf", fatorial);
    // Mostra o valor do fatorial
}