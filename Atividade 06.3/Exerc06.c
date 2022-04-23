#include <stdio.h>

main()
{
    /*
    6 - Ler 2 valores do usuário, calcular e escrever a soma e a média dos inteiros
    existentes entre os 2 valores lidos (incluindo os valores lidos na soma). Observe que
    primeiro você precisa descobrir qual o maior e o menor valor digitado.
    */
    int valor1, valor2, maior, menor, somatorio=0, quant=0;
    /*
    Criando a variáveis:
    valor1: Para o primeiro valor digitado
    valor2: Para o segundo valor digitado
    maior: Para o maior valor digitado
    menor: Para o menor valor digitado
    somatorio: Para o somatorio dos valores
    quant: Para a quantidade de elementos contados
    */
    printf("Digite o primeiro valor:");
    scanf("%d", &valor1);
    printf("Digite o segundo valor:");
    scanf("%d", &valor2);
    // Lê os dois valores
    if (valor1>valor2)
    {
        //Se o valor1 for maior que o valor2, maior recebe o valor1 e menor o valor2
        maior=valor1;
        menor=valor2;
    }
    else
    {
        // Senão, maior recebe o valor1 e menor o valor2
        menor=valor1;
        maior=valor2;
    }
    for (int i = menor; i <= maior; i++)
    {
        // O i varia de menor até maior, com o acréssimo de 1 a cada passo
        somatorio+=i;
        // O valor de i é acresentado ao somatório
        quant+=1;
        // A quantidade elementos aumenta em 1
    }
    printf("O somatorio eh %d\n", somatorio);
    printf("A media eh %d",somatorio/quant);
    // Mostra o valor de somatório
}
