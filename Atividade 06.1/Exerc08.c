#include <stdio.h>

main(){
    /*
    8 - Faça um programa para ler um salário e atualizá-lo (imprimindo na tela o novo valor)
    de acordo com a tabela abaixo.
    */
    int salario, Nsalario;
    // Cria duas variáveis
    printf("Digite o salario inicial:");
    scanf("%d", &salario);
    // Pede o salário inicial
    if (salario<=600){
        Nsalario=1.30*salario;
    }
    else if(salario>600 && salario<=1100){
        Nsalario=1.25*salario;
    }
    else if(salario>1100 && salario<=2400){
        Nsalario=1.20*salario;
    }
    else if(salario>2400 && salario<=3550){
        Nsalario=1.15*salario;
    }
    else if(salario>3550){
        Nsalario=1.1*salario;
    }
    // Faz os cálculos para cada um dos casos
    printf("O novo salario eh %d", Nsalario);
    // Imprime o resultado
}