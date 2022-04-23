#include <stdio.h>
#include <string.h>

main(){
    /*
    7 - Escreva um programa que leia uma string do teclado e solicite ao usuário se tal
    string deve ser convertida (ou ficar) com todos os seus caracteres: 1) em minúscula
    ou 2) em maiúscula. Dica: pode-se usar as funções toupper( ) ou tolower( ) ou fazer
    um “algebrismo”, onde se some 32 aos caracteres cujo código ASCII está entre 65 e
    90 para converter em minúsculas, ou se subtraia 32 dos caracteres cujo código
    ASCII está entre 97 e 122.
    */
    char str[100];
    int resp;
    // Cria as variáveis
    printf("Digite uma palavra ou frase:");
    gets(str);
    // Lê a string
    printf("Digite:\n 1 para deixar maiusculo\n 2 para deixar minusculo\n");
    scanf("%d", &resp);
    // Lê o valor de resp
    for (int i = 0; i <strlen(str) ; i++)
    {
        // O varia de 0 até o tamanho da string digitada
        if (resp==1){
            // Se a resposta for 1, deixe a string em maiúsculo
            str[i]=toupper(str[i]);
        }
        else if (resp==2)
        {
            // Senão, deixe a resposta em minúsculo
            str[i]=tolower(str[i]);
        }
    }
    printf("O resultado eh \"%s\"", str);
    // Mostra o resultado
}