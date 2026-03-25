#include <stdio.h>

int main() {
    // VARS
    float nota1, nota2, nota3, mediaNotas;
    
    // INPUT
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    // ALGOS
    mediaNotas = ((nota1 + nota2 + nota3) / 3);
    
    // OUTPUT
    printf("\nA média das 3 notas é %.2f.\n", mediaNotas);
}