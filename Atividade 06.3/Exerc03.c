#include <stdio.h>
main()
{
    /*
    3- Faça um programa que apresente todos os números múltiplos de 3 entre 1 e 100.
    */
    printf("Progama para calculaar os divisores de 3, de 1 ate 100:\n");
    printf("Os numeros sao:");
    //Digita o título do programa
    for (int i = 1; i <= 100; i++)
    {
        // Dentro do for, o i vai variar de 1 até 100, a cada passo sendo somado 1
        if (i%3==0)
        {
            // Se o resto da divisão de i por 3 for igual a 0, ele será divisível por 3, então
            printf("%d\n",i);
            // Imprima o valor na tela
        }
    }
}
