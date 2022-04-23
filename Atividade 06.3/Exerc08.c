#include <stdio.h>

main()
{
    /*
    8 - O mesmo exercício anterior, mas agora não será informado o número de
    mercadorias em estoque. Então o funcionamento deverá ser da seguinte forma: ler o
    valor da mercadoria e perguntar ‘MAIS MERCADORIAS (S/N)?’. Ao final,
    imprimir o valor total em estoque e a média de valor das mercadorias em estoque.
    */
    int  preco, somatorio=0, quant=0;
    char resp;
    /*
    Criando as variáveis: 
    preco: Para o preço das mercadorias
    somatorio: Para o somatório do preço das mercadorias.
    resp: Para a resposta do usuário
    */
    printf("Programa para calcular a media de mercadorias.\n");
    while(1)
    {
        // Reptição até break
        printf("Preco de mercadoria:");
        // Mostra a número da mercadoria 
        scanf("%d", &preco);
        // Lê o valor do preço
        fflush(stdin);
        // Limpa o buffer
        somatorio+=preco;
        // Calcula o somatório
        quant+=1;
        //Calcula a quantidade de mercadoria
        printf("MAIS MERCADORIAS (S/N)?");
        scanf("%c", &resp);
        // Pergunta se o usuário quer mais mercadorias
        if (resp=='N')
        {
            // Se a resposta for 'N', saia do whila
            break;
        }
        fflush(stdin);
        // Limpa o buffer
    }
    printf("A media eh %d", somatorio/quant);
    // Mostra o valor de média
}