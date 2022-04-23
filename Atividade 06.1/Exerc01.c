#include <stdio.h>

main(){
    /*
    1 - Ler um valor e escrever a mensagem “É MAIOR QUE 10!” se o valor lido for maior
    que 10, caso contrário escrever “NÃO É MAIOR QUE 10!”.
    */
    int valor=0;
    // Cria a variável valor do tipo int
    printf("Digite um valor:");
    scanf("%d", &valor);
    // Lê o valor digitado 
    if (valor>10)
    {
        printf("É MAIOR QUE 10!");
        // Se o valor digitado for maior que 10 imprima "É MAIOR QUE 10!"
    }
    else{
        printf("NÃO É MAIOR QUE 10!");
        // Se o valor digitado for menor que 10 imprima "NÃO É MAIOR QUE 10!"
    }
    
}