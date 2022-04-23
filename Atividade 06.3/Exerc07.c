#include <stdio.h>

main()
{
    /*
    7 - Uma loja está levantando o valor total de todas as mercadorias em estoque.
    Escreva um algoritmo que permita a entrada das seguintes informações: a) o
    número total de mercadorias no estoque; b) o valor de cada mercadoria. Ao final,
    imprimir o valor total em estoque e a média de valor das mercadorias.
    */
    int Nmercadorias, preco, somatorio=0;
    /*
    Criando as variáveis:
    Nmercadorias: Para o número de mercadorias 
    preco: Para o preço das mercadorias
    somatorio: Para o somatório do preço das mercadorias.
    */

    printf("Digite a quantiddade de mercadorias:");
    scanf("%d", &Nmercadorias);
    // Lê a quantidade de mercadorias para ser calculada
    for (int i = 1; i <=Nmercadorias ; i++)
    {
        // i varia de 1 até a quantidade de mercadorias, com o aumento de 1 a cada passo
        printf("Mercadoria %d:", i);
        // Mostra a número da mercadoria 
        scanf("%d", &preco);
        // Lê o valor de preço
        somatorio+=preco;
        // Calcula o somatório
    }
    printf("A media eh %d", somatorio/Nmercadorias);
    // Mostra o valor de média
}
