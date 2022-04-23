#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
2) Escreva um programa que crie uma estrutura para armazenar os dados de um
aluno, contendo matrícula, nome, curso, telefone e endereço. Defina um array de 50
elementos do tipo desta estrutura e implemente uma forma de ler os dados de alunos
e preencher o array. Então salve o conteúdo de tal array em um arquivo binário, de
tal forma que quando o programa for executado novamente, tais dados possam ser
lidos do arquivo e carregados na memória, onde se possa fazer uma busca no array
pelo nome do aluno, exibindo os demais dados do mesmo.
*/

typedef struct
{
    int matriula;
    char nome[40];
    char curso[40];
    char telefone[40];
    char endereco[40];
    // Cria a struct para receber os dados
}aluno ;

int ImpStruct(int quant, aluno *alu){
    // Função que imprime a struct completa
    for (int i = 0; i < quant; i++)
    {
        printf("\nA matricula para o cadastrado %d eh: %d\n", i+1, alu[i].matriula);
        printf("O nome para o cadastrado %d eh: %s\n", i+1, alu[i].nome);
        printf("O curso para o cadastrado %d eh: %s\n", i+1, alu[i].curso);
        printf("O telefone para o cadastrado %d eh: %s\n", i+1, alu[i].telefone);
        printf("O endereco para o cadastrado %d eh: %s\n", i+1, alu[i].endereco);
    }
    return 0;
}

int ImpPosicao(int quant, aluno *alu, int posicao){
    // Função que imprime a struct em uma posição específica
    printf("\nA matricula para o cadastrado %d eh: %d\n", posicao+1, alu[posicao].matriula);
    printf("O nome para o cadastrado %d eh: %s\n", posicao+1, alu[posicao].nome);
    printf("O curso para o cadastrado %d eh: %s\n", posicao+1, alu[posicao].curso);
    printf("O telefone para o cadastrado %d eh: %s\n", posicao+1, alu[posicao].telefone);
    printf("O endereco para o cadastrado %d eh: %s\n", posicao+1, alu[posicao].endereco);
    return 0;
}

int main(){
    int const quant=50;
    // Constante para a quantidade de números a serem lidos
    aluno alu[quant];
    // Cria a struct
    FILE *f;
    f=fopen("struct.bin", "rb");
    if (f==NULL)
    {
        // Se o arquivo não existir será usado estrutura para criar um
        printf("Criando o arquivo com os dados.\n");
        for (int i = 0; i < quant; i++)
        {
            printf("Digite o valor para a matricula do cadastrado %d: ", i+1);
            scanf("%d", &alu[i].matriula);
            printf("Digite o valor para o nome  do cadastrado %d: ", i+1);
            scanf(" %[^\n]s", &alu[i].nome);
            printf("Digite o valor para o curso do cadastrado %d: ", i+1);
            scanf(" %[^\n]s", &alu[i].curso);
            printf("Digite o valor para o telefone  do cadastrado %d: ", i+1);
            scanf(" %[^\n]s", &alu[i].telefone);
            printf("Digite o valor para o endereco  do cadastrado %d: ", i+1);
            scanf(" %[^\n]s", &alu[i].endereco);
        }
        // Lê os valores para a struct
        ImpStruct(quant, alu);
        // Imprime a struct
        FILE *p;
        p=fopen("struct.bin", "wb");
        if (p==NULL)
        {
            printf("Não foi possível criar o arquivo");
        }
        else
        {
            printf("Arquivo criado com sucesso");
        }
        // Abre o arquivo e mostra se foi possível criar ou não
        fwrite(&alu,sizeof(alu), 1, p);
        fclose(p);
    }
    else
    {
        // Se o arquivo já tiver sido criado
        printf("Usando os arquivos:\n");
        fread(&alu, sizeof(alu), 1, f);
        // Leia o conteúdo do arquivo e coloque na variável alu
        printf("Deseja mostrar os valores guardados(1 para sim e 2 para nao)? ");
        int resp;
        while (1){
            scanf("%d", &resp);
            if (resp==1 || resp==2)
            {
                break;
            }
            printf("Valores inválidos. Tente novamente: ");
        }
        if (resp==1)
        {
            ImpStruct(quant, alu);
            // Se o usuário quiser imprimir a denovo os dados a resposta deve ser 1 
        }
        char nome[40];
        int cont=0;
        printf("\nDigite o nome para pesquisar nos dados: ");
        scanf(" %[^\n]s", &nome);
        // Lê o nome para pesquisar nos dados
        for (int i = 0; i < quant; i++)
        {
            if (strcmp(alu[i].nome, nome)==0)
            {
                // Se for econtrado um número igual
                ImpPosicao(quant, alu, i);
                cont++;
                // É imprimido e o contador aumenta em 1
            }
        }
        if (cont==0)
        {
            printf("Nome nao encontrado");
            // Se o contador for 0 o nome digitado não foi encontrado
        }
        fclose(f);
    }
}
