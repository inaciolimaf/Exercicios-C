#include <stdio.h>

/*
9) Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, o
telefone e o endereço de uma pessoa. Agora, leia um inteiro positivo N e crie um
vetor de tamanho N, para essa estrutura. Solicite também que o usuário entre com os
dados para o povoamento desse vetor e depois imprima os dados digitados.
*/
struct Cadastro
{
    char nome[40];
    int telefone;
    char endereco[50];
};
// Cria a struct
int main(){
    int N;
    printf("Digite a quantidade de cadastros para serem lidos:");
    scanf("%d",&N);
    // Lê a quantidade de cadastros
    struct Cadastro cad[N];
    // Cria o vetor do tamanho digitado
    for (int i = 0; i < N; i++)
    {
        printf("Digite o nome para o cadastro %d: ", i+1);
        scanf(" %s", &cad[i].nome);
        printf("Digite o telefone para o cadastro %d: ", i+1);
        scanf("%d", &cad[i].telefone);
        printf("Digite o endereco para o cadastro %d: ", i+1);
        scanf(" %s", &cad[i].endereco);
    }
    // Lê os valores para cad
    printf("\nResuldado: \n");
    for (int i = 0; i < N; i++)
    {
        printf("O nome do cadastrado %d eh: %s\n", i+1, cad[i].nome);
        printf("O telefone do cadastrado %d eh: %d\n", i+1, cad[i].telefone);
        printf("O endereco do cadastrado %d eh: %s\n\n", i+1, cad[i].endereco);
    }
    // Mostra os valores
    return 0;
}