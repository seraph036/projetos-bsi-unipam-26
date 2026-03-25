#include <stdio.h>

int main(void) {
    char tipoPao[5];
    int quantPao;
    float valorPao, valorTotal;
    
    printf("Qual o tipo de pão? ");
    scanf("%s", &tipoPao);
    
    printf("Comprou quantos pães? ");
    scanf("%i", &quantPao);
    
    if (tipoPao[0] == 'S' || tipoPao[0] == 's' && tipoPao[1] == 'a' && tipoPao[2] == 'l') {
        valorPao = 3;
        valorTotal = valorPao * quantPao;
        printf("O valor é R$%.2f.\n", valorTotal);
    } else if (tipoPao[0] == 'D' || tipoPao[0] == 'd' && tipoPao[1] == 'o' && tipoPao[2] == 'c' && tipoPao[3] == 'e') {
        valorPao = 5;
        valorTotal = valorPao * quantPao;
        printf("O valor é R$%.2f.\n", valorTotal);
    }
}