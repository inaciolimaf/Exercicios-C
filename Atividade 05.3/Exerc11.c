#include <stdio.h>


main(){
    /*
    11. Elabore um programa que contenha uma constante do tipo int e atribua um valor inicial
    qualquer válido para tal constante. Use a palavra reservada “const”. Imprima essa constante.
    Depois tente alterar o valor de tal constante. Descreva o que aconteceu.    
    */
    const int constante=0;
    // Criando uma constante do tipo inteiro que recebe o valor 0
    printf("O valor da constante eh %d\n", constante);
    // Mostra o valor da constante
    scanf("%d", &constante);
    // Lê o valor para a constante
    printf("O valor da constante eh %d\n", constante);
    scanf("%d", &constante);
    printf("O valor da constante eh %d\n", constante);
    /*
    Utilizando a atribuição direita, como, por exemplo:
    constante=2;
    O progama dá erro ao compilar ("error: assignment of read-only variable 'constante'"),
    porque a variável é de somente leitura.
    Mas usando o scanf("%d", &constante); foi possível alterar o valor, como é mostrado no código. Isso
    acontece porque o scanf é uma atribuição indireta.
    */
}