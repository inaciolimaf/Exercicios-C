#include <stdio.h>

main(){
    /*
    5 - Fazer um programa que lê um valor real, um operador aritmético (+,-,*,/) e outro
    valor real e imprime o resultado da expressão, de acordo com a seguinte entrada:
    <valor 1><operador><valor 2>
    e produza a seguinte saída: = <resultado>
    onde <resultado> informa o resultado da expressão aritmética dada como entrada.
    */
    float valor1, valor2, resultado;
    char operador;
    // Cria as variáveis
    printf("Calculadora:\n");
    printf("Digite o que voce quer fazer:\n \"+\"");
    printf("para soma \n \"-\" para subtracao \n \"*\"");
    printf("para multiplicacao\n \"/\" para divisao\nDigite o operador:");
    scanf("%c", &operador);
    printf("Digite o primeiro valor:");
    scanf("%f", &valor1);
    printf("Digite o segundo valor:");
    scanf("%f", &valor2);
    // Pede o valor1, valor2 e operador 
    if(operador=='+'){
        resultado=valor1+valor2;
    }
    else if (operador=='-')
    {
        resultado=valor1-valor2;
    }
    else if (operador=='*')
    {
        resultado=valor1*valor2;
    }
    else if (operador=='/')
    {
        resultado=valor1/valor2;
    }
    // Faz os cálculos
    printf("%.3f %c %.3f = %.3f",valor1, operador, valor2, resultado);
    // Mostra o resultado na tela
}