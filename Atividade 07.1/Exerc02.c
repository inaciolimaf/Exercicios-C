#include <stdio.h>

main(){
    /*
    2 - Faça um programa que leia um conjunto de n (a ser informado pelo usuário)
    notas (números reais), entre 0,00 e 10,00 (inclusive) e, ao final, informe quais são: 1)
    menores do que 4,0; 2) maiores ou iguais a 4,00 e menores do que 7,0; e 3) maiores
    ou iguais a 7,0. Informe ainda a média por cada subconjunto de notas e a média geral
    das notas.
    */

    int tamanho, cont=0, quant1=0, quant2=0, quant3=0;
    float soma1=0, soma2=0, soma3=0, resp, SomaTotal=0, media1=0, media2=0, media3=0;
    // Criando as variáveis
    printf("Digite a quantidade de notas para serem lidas:");
    scanf("%d", &tamanho);
    // Lendo o tamanho para os vetores
    int vet1[tamanho], vet2[tamanho], vet3[tamanho];
    // Criando os vetores

    while (cont<tamanho){
        // Enquanto o contador for menor que o tamanho do vetor
        printf("Digite a %d nota: ", cont+1);
        scanf("%f", &resp);
        // Lê em valor para a nota
        if ((resp>=0) && (resp<=10)){
            // Se o valor da nota for válido então
            cont+=1;
            // Aumenta o contador emm 1
            if (resp<4){
                // Se a nota se encaixar no 1° grupo, então
                soma1+=resp;
                // É acrecentado resp na soma1
                vet1[quant1]=resp;
                // Adiciona resp no vet1
                quant1+=1;
                // Na quantidade é acrecentado 1
            }
            else if (resp>=4 && resp<7){
                // O mesmo que acima, mas para o grupo 3
                soma2+=resp;
                vet2[quant2]=resp;
                quant2+=1;
            }
            else if (resp>=7){
                // O mesmo que acima, mas para o grupo 3
                soma3+=resp;
                vet3[quant3]=resp;
                quant3+=1;
            }
            SomaTotal+=resp;
            // É adicionado resp na SomaTotal
        }
        else
        {
            // Se não, imprima uma mensagem e descosidere o valor digitado
            printf("Numero invalido, digite um numero entre 0.00 e 10.00\n");
        }
    }

    if (!(quant1==0))
    {
        // Se a quantidade de notas no grupo 1 for diferente de 0, então
        printf("As notas menores do que 4,0 sao: ");
        // Imprima uma mensagem explicando para o usuário
        for (int i = 0; i < quant1; i++)
        {
            // O i varia de 0 até a quantidade de números no grupo 1
            printf("%d, ", vet1[i]);
            // Imprima o valor do vetor na posição i
        }
        media1=soma1/quant1;
        // Calcule a média do 1° grupo
    }
    if(!(quant2==0)){
        // A mesma coisa que o de cima só que para o grupo 2
        printf("\nAs notas maiores ou iguais a 4,00 e menores do que 7,0 sao: ");
        for (int i =0; i< quant2; i++)
        {
            printf("%d, ", vet2[i]);
        }
        media2=soma2/quant2;
    }
    if (!(quant3==0))
    {
        // A mesma coisa que o de cima só que para o grupo 3
        printf("\nAs notas maiores ou iguais a 7,0 sao:");
        for (int i =0; i < quant3; i++)
        {
            printf("%d, ", vet3[i]);
        }
        media3=soma3/quant3;
    }

    printf("\nMedia das notas menores do que 4,0 eh %.2f\n", media1);
    printf("Media das notas maiores ou iguais a 4,00 e menores do que 7,0 eh %.2f\n", media2);
    printf("Media das notas maiores ou iguais a 7,0 eh %.2f\n", media3);
    printf("Media geral das notas eh %.2f\n", SomaTotal/cont);
    // Imprime a média dos 3 grupos e a média geral
}