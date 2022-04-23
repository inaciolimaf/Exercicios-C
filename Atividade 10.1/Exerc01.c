#include <stdio.h>

/*
1) Escreva uma função que receba por parâmetro dois números reais e retorne o
maior deles.
*/
int maior(int a, int b)
{
    // Cria a função
    if (a>b)
    {
        return a;
        // Se a for a maior que b, retorna a
    }
    else
    {
        return b;
        // Senão, retorna b
    }
}
int main()
{
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    // Lê dois valores
    printf("O maior eh %d", maior(num1, num2));
    // Mostra o maior valor digitado
    return 0;
}