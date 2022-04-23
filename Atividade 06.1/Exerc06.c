#include <stdio.h>

main(){
    /*
    6 - Escreva um programa que verifique a validade de uma senha fornecida pelo usuário.
    A senha válida é “abacate”. Devem ser impressas as seguintes mensagens:

    “ACESSO PERMITIDO”, caso a senha seja válida.
    “ACESSO NEGADO”, caso a senha seja inválida.
    */
    char resposta[7];
    // Cria a variável
    printf("Digite a senha:");
    scanf("%s", &resposta);
    //  Pede a senha
    if (strcmp(resposta,"abacate")==0){
            printf("ACESSO PERMITIDO");
            // Se a resposta for "abacate" imprima "ACESSO PERMITIDO"
    }
    else{
        printf("ACESSO NEGADO");
        // Senão, imprima "ACESSO NEGADO"
    }

}