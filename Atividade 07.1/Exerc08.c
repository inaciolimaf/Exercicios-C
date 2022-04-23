#include <stdio.h>
#include <string.h>

main(){
    /*
    8 - Escreva um programa que recebe uma string S e dois valores inteiros não
    negativos i e j (com i e j diferentes entre si e menores ou iguais ao tamanho de S).
    Em seguida, imprima os caracteres contidos no segmento da string S que vai de i a j.
    */
    char str[100];
    int i=0, j=0;
    // Cria as variáveis
    printf("Programa que mostra o intervalo da string\n");
    printf("Digite a string:");
    gets(str);
    // Lê a string
    while (1){
        printf("Mostrar o intervalo de ");
        scanf("%d", &i);
        printf("ate ");
        scanf("%d", &j);
        if (i<=strlen(str)&& j<=strlen(str))
        {
            break;
        }
        printf("Valores invalidos, digite valores menores que a quantidade de caracters digitados\n");
    }
    // Lê os dois valores e garante que eles são menores ou iguais que o tamanho da string
    if (i>j)
    {
        j=j+i;
        i=j-i;
        j=j-i;
    }
    // Se o i for maior que o j, troque as variáveis
    printf("A string de %d ate %d eh: ", i,j);
    for (int k = i; k <= j; k++)
    {
        // K varia de i até j, com o acrécimo de 1
        printf("%c", str[k-1]);
        // Mostra a string na posição k-1, porque a string começa na posição 0
    }
}