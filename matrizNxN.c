#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int tamanho;
    char preenchimento;
    int matriz[tamanho][tamanho];
    printf("vamos criar uma matriz quadrada!\n");
    printf("qual deverá ser o tamanho dessa matriz? insira o valor de n, para matriz nxn: ");
    scanf("%i", &tamanho);
    printf("qual deverá ser o caractere que preencherá essa matriz? ");
    getchar();
    scanf("%c", &preenchimento);
    printf("\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%c ", preenchimento);
        }
        printf("\n");
    }
    printf("\npronto! \n");
}