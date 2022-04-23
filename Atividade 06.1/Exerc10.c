#include <stdio.h>

main(){
    /*
    10 – Escreva um programa que calcule a média de cada aluno de uma disciplina,
seguindo a seguinte fórmula:

ou media = (P1 ∗ N1 + P2 ∗ N2) / (P1 + P2)
Em que, N1 e N2 são as notas de cada aluno da disciplina e P1 e P2 são os
respectivos pesos destas notas. Informe se o aluno foi “Aprovado” (média maior ou
igual a 7,0), finou de “Final” (média menor que 7,0 e maior ou igual a 4,0) ou se
ficou “Reprovado” (média menor do que 4,0).
    */
   float N1, P1, N2, P2, media;
   // Cria as 5 variáveis
   printf("Digite os valores para para calcular a media:\n");
   printf("Nota 1: ");
   scanf("%f",&N1);
   printf("Peso da nota 1: ");
   scanf("%f",&P1);
   printf("Nota 2: ");
   scanf("%f",&N2);
   printf("Peso da nota 2: ");
   scanf("%f",&P2);
   // Pede os 5 valores
   media = (P1 * N1 + P2 * N2) / (P1 + P2);
   // Calcula a media
   if (media < 4){
       printf("Reprovado");
   }
   else if(media<=4 && media<7){
       printf("Final");
   }
   else if(media>=7){
       printf("Aprovado");
   }
   // Mostra a situação do aluno
   printf("\nA media eh %.2f", media);
}