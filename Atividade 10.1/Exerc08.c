#include <stdio.h>

/*
8) Crie uma estrutura, representando um aluno de uma disciplina, onde essa estrutura
deve conter o número de matrícula do aluno (um número inteiro), seu nome (com até
40 caracteres) e as notas de três provas (reais), além de um campo para a média de
tais notas. Escreva um programa que leia os dados para povoar esta estrutura
(matrícula, nome e 3 notas) e calcule e armazene a média das notas.
*/
struct alu
{
    int matricula;
    char nome[40];
    float nota1;
    float nota2;
    float nota3;
    float media;
};//Cria a struct

int main(){
    struct alu aluno[2];
    // Cria um vetor
    for (int i = 0; i <=1; i++)
    {
        printf("Digite as informacoes para o aluno %d:\n", i+1);
        printf("Digite a matricula: ");
        scanf("%d", &aluno[i].matricula);
        printf("Digite o nome do aluno: ");
        scanf(" %s", &aluno[i].nome);
        printf("Digite a primeira nota: ");
        scanf("%.2f", &aluno[i].nota1);
        printf("Digite a segunda nota: ");
        scanf("%.2f", &aluno[i].nota2);
        printf("Digite a terceira nota: ");
        scanf("%.2f", &aluno[i].nota3);
        // Lê os valores para o vetor na posição i
        aluno[i].media= (aluno[i].nota1+aluno[i].nota2+aluno[i].nota3)/3;
        // Calcula a media
    }
    printf("\nResultado: \n");
    for (int i = 0; i <=1; i++)
    {
        printf("Matricula do aluno %d: %d\n", i+1, aluno[i].matricula);
        printf("Nome do aluno %d: %s\n", i+1, aluno[i].nome);
        printf("Nota 1 do aluno %d: %.2f\n", i+1, aluno[i].nota1);
        printf("Nota 2 do aluno %d: %.2f\n", i+1, aluno[i].nota2);
        printf("Nota 3 do aluno %d: %.2f\n", i+1, aluno[i].nota3);
        printf("Media do aluno %d: %.2f\n\n", i+1, aluno[i].media);
    }
    // Mostra o resultado
    return 0;
}