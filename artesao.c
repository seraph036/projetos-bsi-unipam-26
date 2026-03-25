#include <stdio.h>

int main() {
	// vars
	float precoPeca = 20;
	int quantPecas;
	
	// input
	printf("Quantas peças foram vendidas? ");
	scanf("%i", &quantPecas);
	
	// algos & output
	printf("O valor final será de R$%.2f.\n", quantPecas*precoPeca);
}

