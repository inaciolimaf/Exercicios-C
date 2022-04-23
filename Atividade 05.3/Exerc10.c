#include <stdio.h>

main(){
    /*
    10. Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano 
    (inteiros). Em seguida, imprima os valores lidos separados por uma barra (/).
    */
    int dia, mes, ano;
    // Cria três variáveis valor do tipo int
    printf("Digite a data no formato aa/aa/aaaa, utilizando numeros para reprensentar os meses\n");
    printf("Digite o dia:");
    // Pede o valor do dia 
    scanf("%d", &dia);
    // Lê o valor do dia
    printf("Digite o mes:");
    // Pede o valor do mês
    scanf("%d", &mes);
    // Lê o valor do mês
    printf("Digite o ano:");
    // Pede o valor do ano
    scanf("%d", &ano);
    // Lê o valor do ano
    printf("A data eh: %02d/%02d/%d", dia, mes, ano);
    // Imprimi a data
}