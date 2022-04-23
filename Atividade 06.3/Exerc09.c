#include <stdio.h>

main(){
    /*
    9 - Faça um programa que leia um valor do usuário e informe se o número digitado
    é primo ou não.
    */
    int num, Ndivisores=0;
    /*
    Cria as variáveis
    num: Para o número digitado
    Ndivisores: Para o Número de divisores
    */
    printf("Digite um numero:");
    scanf("%d", &num);
    //Lê um número
    for (int i = 1; i <=num; i++)
    {
        // O i varia de 1 até num, com o aumento de 1 a cada passo
        if (num%i==0)
        {
            // Se o resto da divisão de num por i der resto 0, então
            Ndivisores+=1;
            // Aumenta em 1 o número de divisores
        }
    }
    if (Ndivisores==2)
    {
        // Se o número de divisores for 2, ele é primo 
        printf("%d eh primo",num);
    }
    else
    {
        // Se não, ele não é primo
        printf("%d nao eh primo", num);
    } 
}