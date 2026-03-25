#include <stdio.h>

int main() {
	// vars
	float salario, porcentPosTaxa, valorFinal;
	porcentPosTaxa = 0.98;
	
	// input
	printf("Qual o valor do salário? ");
	scanf("%f", &salario);
	
	// algos
	valorFinal = salario * porcentPosTaxa * porcentPosTaxa;
	
	// output
	printf("O valor final é de R$%.2f.\n", valorFinal);
}

