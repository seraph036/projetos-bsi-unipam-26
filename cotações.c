#include <stdio.h>

int main(void) {
    float pre1, pre2, pre3;
    
    printf("Digite a primeira cotação: ");
    scanf("%f", &pre1);
    
    printf("Digite a segunda cotação: ");
    scanf("%f", &pre2);
    
    printf("Digite a terceira cotação: ");
    scanf("%f", &pre3);
    
    if (pre1 < pre2 && pre1 < pre3) {
        printf("A primeira cotação é a mais barata, com valor de: R$%.2f.\n", pre1);
    }
    
    if (pre2 < pre1 && pre2 < pre3) {
        printf("A segunda cotação é a mais barata, com valor de: R$%.2f.\n", pre2);
    }
    
    if (pre3 < pre2 && pre3 < pre1) {
        printf("A terceira cotação é a mais barata, com valor de: R$%.2f.\n", pre3);
    }
}