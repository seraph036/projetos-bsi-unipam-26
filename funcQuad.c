/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
    int a,b,c;
    float xvert, yvert;
    float result1, result2;
    printf("digite o coeficiente 'A': ");
    scanf("%i", &a);
    printf("digite o coeficiente 'B': ");
    scanf("%i", &b);
    printf("digite o coeficiente 'C': ");
    scanf("%i", &c);
    result1 = (-b + sqrt(b*b-4*a*c)) / (2*a);
    result2 = (-b - sqrt(b*b-4*a*c)) / (2*a);
    xvert = (-b) / (2*a);
    yvert = (-1*(b*b-4*a*c)) / (4*a);
    printf("A coordenada do vértice é (%.4f, %.4f)\n", xvert, yvert);
    if ((b*b - 4*a*c) < 0) {
        printf("Não há raízes reais para essa função.\n");
    } else {
        if (result1 == result2) {
            printf("Só há uma raiz real, que é %f\n", result1);
        } else {
            printf("Há duas raízes reais, que são %f e %f\n", result1, result2);
        }
    }
}

