#include <stdio.h>

int main(void) {
    float quantGas;
    printf("Quanto foi abastecido? ");
    scanf("%f", &quantGas);
    if (quantGas < 10) {
        printf("Ganhou um chaveiro!\n");
    } else if (quantGas >= 20) {
        printf("Ganhou uma troca de óleo!\n");
    } else {
        printf("Ganhou uma ducha!\n");
    }
}
