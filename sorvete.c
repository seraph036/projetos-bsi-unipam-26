#include <stdio.h>

int main(void) {
    float valBola, valTotal;
    char saborSorv;
    int quantBolas;
    valBola = 1.5;
    printf("Insira a sigla do sabor da bola de sorvete: ");
    scanf("%c", &saborSorv);
    printf("Imprima a quantidade de bolas de sorvete: ");
    scanf("%i", &quantBolas);
    
    valTotal = valBola * quantBolas;
    
    if (saborSorv == 'M' || saborSorv == 'm') {
        printf("O sabor do sorvete é morango.\n");
    } else if (saborSorv == 'C' || saborSorv == 'c') {
        printf("O sabor do sorvete é creme.\n");
    } else if (saborSorv == 'F' || saborSorv == 'f') {
        printf("O sabor do sorvete é flocos.\n");
    } else if (saborSorv == 'A' || saborSorv == 'a') {
        printf("O sabor do sorvete é de ameixa.\n");
    } else {
        printf("Esse não é um sabor possível.\n");
    }
    
    printf("O valor do sorvete é R$%.2f.\n", valTotal);
}