#include <stdio.h>

main() {
	double raio, diametro, comprimento, area;
	const double PI = 3.1415926;
	printf("Calcularemos o diametro, o comprimento e a area do circulo!\n");
	printf("Insira o raio do circulo: ");
	scanf("%lf", &raio);
	diametro = 2*raio;
	comprimento = diametro*PI;
	area = PI*raio*raio;
	printf("Diametro do circulo = %.2lf, comprimento = %.2lf, area = %.2lf.\n", diametro, comprimento, area);
}
