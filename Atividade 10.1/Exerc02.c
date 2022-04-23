#include <stdio.h>

/*
2) Faça uma função que receba um número inteiro entre 1 e 12 e imprima em tela o
mês e a sua quantidade de dias de acordo com o número digitado pelo usuário.
Exemplo: Entrada = 4. Saída = abril (30 dias)
*/

int ImpriMes(int NMes){
    int QuantDias;
    if (NMes<1 || NMes>12)
    {
        printf("Valor digitado invalido.");
        // Se o valor digitado não for válido imprima que o valor não é válido
    }
    if (NMes==1 || NMes==3 || NMes==5 || NMes==7 || NMes==8 || NMes==10|| NMes==12)
    {
        QuantDias=31;
        // Se o valor digitado for 1, 3, 5, 7, 8, 10 ou 12, equivale ao mês com 31 dias.
        // QuantDias recebe 31
    }
    else if (NMes==2)
    {
        QuantDias=28;
        // Se for 2(fevereiro) recebe 28
    }
    else
    {
        QuantDias=30;
        // Senão recebe 30
    }
    switch (NMes) {
        case 12:
        printf("dezembro (%d dias)", QuantDias);
        break;
        case 11:
        printf("novembro (%d dias)", QuantDias);
        break;
        case 10:
        printf("outubro (%d dias)", QuantDias);
        break;
        case  9:
        printf("setembro (%d dias)", QuantDias);
        break;
        case  8:
        printf("agosto (%d dias)", QuantDias);
        break;
        case  7:
        printf("julho (%d dias)", QuantDias);
        break;
        case  6:
        printf("junho (%d dias)", QuantDias);
        break;
        case  5:
        printf("maio (%d dias)", QuantDias);
        break;
        case  4:
        printf("abril (%d dias)", QuantDias);
        break;
        case  3:
        printf("marco (%d dias)", QuantDias);
        break;
        case  2:
        printf("fevereiro (%d dias)", QuantDias);
        break;
        case  1:
        printf("janeiro (%d dias)", QuantDias);
        break;
        // Imprime o mês dependendo do valor digitado
    }
}
int main(){
    int mes;
    scanf("%d", &mes);
    //Lê o valor de mês
    ImpriMes(mes);
    // Usa a função
    return 0;
}