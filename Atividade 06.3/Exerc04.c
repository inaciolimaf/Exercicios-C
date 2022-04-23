#include <stdio.h>

main()
{
    /*
    4 - Faça um programa que leia 10 valores e escreva quantos desses valores lidos são
    NEGATIVOS, qual o maior e o menor valor, a soma (somatório) e a média
    aritmética desses valores lidos.
    */
    int valorlido, Nnegativos, maior=0, menor, somatorio=0;
    /*
    Criando as variáveis:
    valorlido: Para os valores lidos do usuário
    Nnegativos: Para o número de negativos digitados
    maior: Para o maior valor digitado
    menor: Para o menor valor digitado
    somatorio: Para a soma dos valores digitados pelo usuário 
    */
    printf("Progama que calula informacoes sobre os numeros digitados\n");
    printf("Digite os 10 numeros:\n");
    // Digita o título do programa
    for (int i = 1; i <=10; i++)
    {
        // Aqui o valor de i varia de 1 até 10, com o acréssimo de 1 a cada passo
        scanf("%d", &valorlido);
        // Lê o valor digitado pelo usuário
        if (valorlido<0)
        {
            // Se o valor digitado for menor ele é negativo, então
            Nnegativos++;
            // Se soma 1 no número de negativos
        }
        if (i==1)
        {
            // Se o valor digitado for o primeiro então
            menor=valorlido;
            // menor recebe o valor digitado, para o menor valor ser calculado com base nele
        }
        if (valorlido<menor)
        {
            // Se o valor digitado for menor que o menor, então
            menor=valorlido;
            // O menor recebera o valor digtado, porque vai ser o novo menor
        }
        if (valorlido>maior)
        {
            // Se o valor digitado for maior que o maior, então
            maior=valorlido;
            // Maior recebe o valor lido
        }
        somatorio += valorlido;
        // O valor digitado se soma ao valor do somátório
    }
    printf("O numero de valores negativos eh %d\n", Nnegativos);
    printf("O menor valor eh %d\n",menor);
    printf("O maior valor eh %d\n", maior);
    printf("O somatorio eh %d\n",somatorio);
    printf("A media dos valores eh %d\n", (somatorio/10));
    // Mostra os resultados encontrados
}
