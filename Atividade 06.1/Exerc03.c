#include <stdio.h>

main(){
    /*
    3 - Ler as notas da 1a. e 2a. avaliações de um aluno. Calcular a média aritmética simples
    e escrever uma mensagem que diga se o aluno foi ou não aprovado (considerar que nota
    igual ou maior que 6 o aluno é aprovado). Escrever também a média calculada.
    */
    float nota1, nota2, media;
    // Cria 3 variáveis do tipo float
    printf("Digite a primeira nota:");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:");
    scanf("%f", &nota2);
    // Pede a primeira e a segunda nota
    media=(nota1+nota2)/2;
    // Calculando a média
    if (media>=6){
        printf("O aluno foi aprovado com media %2.2f.", media);
        // Se a media for maior ou igual a 6 imprima que foi aprovado e a média
    }
    else{
        printf("O aluno foi reprovado com média %f.", media);
        // Senão, imprima que foi reprovado e a média
    }
}