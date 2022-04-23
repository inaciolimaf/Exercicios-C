#include <stdio.h>
#include <string.h>

main(){
    /*
    3 - Faça um programa que leia uma string e imprima uma mensagem dizendo se ela
    é um palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade de
    poder ser lida tanto da direita para a esquerda como da esquerda para a direita.
    Ignorar maiúsculas/minúsculas.
    Exemplos: ovo, arara, rever, asa, osso, ana etc.
    */
    int valor;
    char resp[100], invertido[100];
    // Criar as variáveis para a resposta e a resposta invertida
    printf("Digite a palavra para saber se eh palimdromo: ");
    scanf("%s", &resp);
    // Lê o valor para resp
    for (int i = 0; i<strlen(resp); i++)
    {
        resp[i]= tolower(resp[i]);
    }
    // Deixa toda a resposta em minúsculo
    strcpy(invertido,resp);
    // Copia resp para invertido
    strrev(invertido);
    // Inverte o valor digitado
    valor=strcmp(resp,invertido);
    // Compara as duas strings
    if (valor==0)
    {
        // Se for um palímdromo, imprima uma mensagem
        printf("Eh um palimdromo");
    }
    else{
        // Se não for um palímdromo, imprima uma mensagem e o valor digitado invertido
        printf("Nao eh um palimdromo\n");
        printf("O valor invertido eh: %s", invertido);
    }
}