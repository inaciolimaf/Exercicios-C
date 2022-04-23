#include <stdio.h>

main(){
    /*
    2 - Ler um valor real qualquer e escrever se o mesmo é (estritamente) “Positivo”,
    “Negativo” ou igual a “Zero”.
    */
    float valor=0;
    // Cria uma variável valor do tipo float
    printf("Digite um valor:");
    scanf("%f", &valor);
    // Ler o valor digitado
    if (valor>0)
    {
        printf("Positivo");
        // Se o valor for maior que 0 imprima "Positivo"
    }
    else if (valor<0)
    {
        printf("Negativo");
        // Se o valor for menor que 0 imprima "Negativo"
    }
    else{
        printf("Zero");
        // Senão, imprima "Zero"
    }
    
    
    
}