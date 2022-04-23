#include <stdio.h>
#include <string.h>
main(){
    /*
    5 - Leia dois nomes (strings), compare se os mesmos são iguais. Neste caso,
    imprima: “Nomes iguais”. Caso contrário, imprima “Nomes diferentes”.
    */
    char primeironome[100], segundonome[100];
    printf("Digite o primeiro nome:");
    gets(primeironome);
    printf("Digite o segundo nome:");
    gets(segundonome);
    // Lê as duas strings
    if (strcmp(primeironome, segundonome)==0)
    {
      // Se forem iguais, imprima nomes iguais
      printf("Nomes iguais");
    }
    else
    {
      // Senão, imprima nomes diferentes
      printf("Nomes diferentes");
    }  
}