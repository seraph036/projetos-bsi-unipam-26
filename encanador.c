/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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