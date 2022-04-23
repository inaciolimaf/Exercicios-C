#include <stdio.h>
#include <string.h>

main(){
    /*
    4 - Faça um programa que faça o mesmo do anterior, mas considerando frases e não
    somente palavras, ignorando espaços em branco, maiúsculas/minúsculas e
    acentuação.
    Exemplos: Socorram-me, subi no ônibus em Marrocos; O romano acata
    amores a damas amadas e Roma ataca o namoro; Anotaram a data da
    maratona; A mãe te ama.
    */
    int j=0, valor=0,ValorInteiro;
    char resp[100], StrRevisada[100],StrRevisada2[100], invertido[100];
    // Criar as variáveis para a resposta e a resposta invertida
    printf("Digite a frase para saber se eh palimdromo: ");
    gets(resp);
    // Lê o valor para resp
    for (int i = 0; i<(strlen(resp)+1); i++)
    {
        resp[i]= tolower(resp[i]);
    }
    // Deixa toda a resposta em minúsculo
    for (int i = 0; i <(strlen(resp)+1); i++)
    {
        if (resp[i]==','||resp[i]=='.'||resp[i]==';'||resp[i]=='-')
        {
            StrRevisada[j]=resp[i+1];
            i++;
        }
        else{
            StrRevisada[j]=resp[i];
        }
        j+=1;
    }
    // Retira todas as pontuações e passa para outra string
    j=0;
    for (int i = 0; i <(strlen(StrRevisada)+1); i++)
    {
        if(isspace(StrRevisada[i]))
        {
            StrRevisada2[j]=StrRevisada[i+1];
            i++;
        }
        else{
            StrRevisada2[j]=StrRevisada[i];
        }
        j+=1;
    }
    // Retira os espaços da string e passa para outra string
    for (int i = 0; i <(strlen(StrRevisada2)+1); i++)
    {
        // Parte para tirar a acentuação
        // O i varia de 0 até o tamanho da string
        ValorInteiro=(int) StrRevisada2[i];
        // ValorInteiro recebe o valor de StrRevisada na posição i convertido para inteiro
        if (ValorInteiro==-96 || ValorInteiro==-123|| ValorInteiro==-58|| ValorInteiro==-125)
        {
            // Se o valor de ValorInteiro equivaler à algum caractere 'a' acentuado
            StrRevisada2[i] = 'a';
            // Troca o valor do caractere para 'a'
        }
        // O mesmo segue para as outras vogais
        else if (ValorInteiro==-126 || ValorInteiro==-120)
        {
            StrRevisada2[i] = 'e';
        }
        else if (ValorInteiro==-95 || ValorInteiro==-116)
        {
            StrRevisada2[i] = 'i';
        }
        else if(ValorInteiro==-94 || ValorInteiro==-109 || ValorInteiro==-28){
            StrRevisada2[i] = 'o';
        }
        else if(ValorInteiro==-93 || ValorInteiro==-106){
            StrRevisada2[i] = 'u';
        }
    }
    // Atríbui o valor de resp sem espaços e sem pontuação para StrRevisada
    strcpy(invertido,StrRevisada2);
    // Copia resp para invertido
    strrev(invertido);
    // Inverte o valor digitado
    valor=strcmp(StrRevisada2,invertido);  
    // Compara as duas strings
    printf("Sem acentos acentos, sem pontucao e sem espacos, fica assim: \"%s\" e ela ", StrRevisada2); 
    if (valor==0)
    {
        // Se for um palímdromo, imprima uma mensagem
        printf("eh um palimdromo\n");
    }
    else{
        // Se não for um palímdromo, imprima uma mensagem e o valor digitado invertido
        printf("nao eh um palimdromo\n");
        printf("O valor invertido eh: \"%s\"", invertido);
    }
}