#include <stdio.h>
#include <string.h>
/*
10) Dado o programa do item anterior, faça com que o usuário possa escolher entre o
primeiro nome ou o telefone e faça uma busca nos registros, mostrando os outros
dados do usuário encontrado, ou mostre a mensagem “usuário não encontrado”, caso
contrário.
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
    char resp[40];
    int PEncont[N], resptel, cont=0, telounom;
    // Cria um vetor para guardar onde os foi encontrado e um contador
    do
    {
        printf("Pesquisar por nome(1) ou telefone(2): ");
        scanf("%d", &telounom);
    } while (telounom!=1&&telounom!=2);
    if (telounom==1)
    {
        // Procura pelo nome
        printf("Digite um nome para ser procurado: ");
        scanf("%s", &resp);
        // Lê o nome
        for (int i = 0; i < N; i++)
        {
            // For que passa por todos os valores de cad
            if (strcmp(cad[i].nome, resp)==0){
                // Compara se o nome de cad é o mesmo que a resposta
                PEncont[cont]=i;
                // Se for, PEcont recebe o valor da posição encontrada
                cont+=1;
                // Senão, cont aumenta em 1
            }
        }
        if (cont==0)
        {
            printf("usuario nao encontrado");
            // Se contf for igual a 0, imprima que não foi encontrado
        }
        else
        {
            for (int i = 0; i < cont; i++)
            {
                printf("O nome do cadastrado %d eh: %s\n", PEncont[i], cad[PEncont[i]].nome);
                printf("O telefone do cadastrado %d eh: %d\n", PEncont[i], cad[PEncont[i]].telefone);
                printf("O endereco do cadastrado %d eh: %s\n\n", PEncont[i], cad[PEncont[i]].endereco);
            }// Senão, imprima o valor cad em cada posição que foi encontrada e guardada no vetor PEncont  
        }
    }
    else if (telounom==2)
    {
        // Procura pelo telefone
        printf("Digite um telefone para ser procurado: ");
        scanf("%d", &resptel);
        // Lê o nome
        for (int i = 0; i < N; i++)
        {
            // For que passa por todos os valores de cad
            if (cad[i].telefone==resptel){
                // Compara se o nome de cad é o mesmo que a resposta
                PEncont[cont]=i;
                // Se for, PEcont recebe o valor da posição encontrada
                cont+=1;
                // Senão, cont aumenta em 1
            }
        }
        if (cont==0)
        {
            printf("usuario nao encontrado");
            // Se contf for igual a 0, imprima que não foi encontrado
        }
        else
        {
            for (int i = 0; i < cont; i++)
            {
                printf("O nome do cadastrado %d eh: %s\n", PEncont[i]+1, cad[PEncont[i]].nome);
                printf("O telefone do cadastrado %d eh: %d\n", PEncont[i]+1, cad[PEncont[i]].telefone);
                printf("O endereco do cadastrado %d eh: %s\n\n", PEncont[i]+1, cad[PEncont[i]].endereco);
            }// Senão, imprima o valor cad em cada posição que foi encontrada e guardada no vetor PEncont  
        }
    }
    return 0;
}