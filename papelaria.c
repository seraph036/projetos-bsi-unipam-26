#include <stdio.h>
#include <stdlib.h>

int main() {
    float valorLapis, valorCaneta, valorBorracha;
    int numLapis, numCaneta, numBorracha;
    printf("digite o valor do lapis: ");
    scanf("%f", &valorLapis);
    printf("digite o valor da caneta: ");
    scanf("%f", &valorCaneta);
    printf("digite o valor da borracha: ");
    scanf("%f", &valorBorracha);
    
    printf("\n");
    
    printf("quantos lapis foram comprados? ");
    scanf("%i", &numLapis);
    printf("quantas canetas foram comprados? ");
    scanf("%i", &numCaneta);
    printf("quantas borrachas foram comprados? ");
    scanf("%i", &numBorracha);
    
    printf("\n");
    
    if (numLapis > 0) {
        if (numCaneta > 0) {
            if (numBorracha > 0) {
                printf("foram comprados %i lapis, %i canetas e %i borrachas\n", numLapis, numCaneta, numBorracha);
                printf("foram gastos %.2f reais em lapis, %.2f reais em canetas e %.2f reais em borrachas\n", numLapis*valorLapis, numCaneta*valorCaneta, numBorracha*valorBorracha);
            } else {
                printf("foram comprados %i lapis e %i canetas\n", numLapis, numCaneta);
                printf("foram gastos %.2f reais em lapis e %.2f reais em canetas\n", numLapis*valorLapis, numCaneta*valorCaneta);
            }
        }
    } else if (numCaneta > 0) {
        if (numBorracha > 0) {
                printf("foram compradas %i canetas e %i borrachas\n", numCaneta, numBorracha);
                printf("foram gastos %.2f reais em canetas e %.2f reais em borrachas\n", numCaneta*valorCaneta, numBorracha*valorBorracha);
            } else {
                printf("foram compradas %i canetas\n", numCaneta);
                printf("foram gastos %.2f reais em canetas\n", numCaneta*valorCaneta);
                }
            } else if (numBorracha > 0) {
            printf("foram compradas %i borrachas\n", numBorracha);
            printf("foram gastos %.2f reais em borrachas\n", numBorracha*valorBorracha);
        }
    
    printf("O valor total gasto foi de %.2f reais.\n", numLapis*valorLapis + numCaneta*valorCaneta + numBorracha*valorBorracha);
}