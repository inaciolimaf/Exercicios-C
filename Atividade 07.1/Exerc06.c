#include <stdio.h>
#include <string.h>

main(){
   	/*
    6 - Construa um programa que leia duas strings do teclado. Imprima uma mensagem
    informando quantas vezes a segunda string lida está contida dentro da primeira.   
    */
    int i=0, j=0, k, cont=0,contrepet=0;
    char str1[100],str2[100];
    // Cria as duas strings
    printf("Digite a primeira string:");
    gets(str1);
    // Lê a primeira string
    printf("Digite a segunda string:");
    gets(str2);
    // Lê a segunda string
    while (i<strlen(str1)){
        // O valor de i varia de 0 até o tamanho da primeira string digitada
        k=i;
        // K vai receber o valor de i
        // É necessário duas varíaveis para a segunda repetição não intervira na primeira
        while (j<strlen(str2)){
            // O varia de 0 até o tamanho da segunda string digitada
            if (str2[j]==str1[k])
            {
                // Se as duas strings tiverem alguma parte igual, o cont aumenta em 1
                cont++;
            }
            j++;
            k++;
            // Faz um acrécimo no valor de j e k, e repete a mesma comparação
        }
        if (strlen(str2)==cont)
        {
            // Se a quantidade de partes iguais for igual ao tamanho de str2 significa
            // que a string está contida mais uma vez, então aumente o contador de repetições
            contrepet++;
        }
        cont=0;
        j=0;
        i++;
        //Zera os contadores e aumenta o i em 1, para testar mais uma vez;
    }
    printf("\n\"%s\" esta contido %d vezes em \"%s\".\n\n", str2, contrepet, str1);
    // Mostra o resultado
}