#include <stdio.h>
#include <math.h>

int main() {
	// vars
	float valorDeposito, taxaJuros, tempoRendimento, valorRendimento, valorFinal;
	
	// input
	printf("Qual o valor do depósito? ");
	scanf("%f", &valorDeposito);
	printf("Qual é a porcentagem da taxa de juros? ");
	scanf("%f", &taxaJuros);
	printf("Qual o tempo do rendimento (em meses)? ");
	scanf("%f", &tempoRendimento);
	
	// algos
	valorFinal = valorDeposito * pow(1 + taxaJuros/100, tempoRendimento);
	valorRendimento = valorDeposito * pow(taxaJuros/100, tempoRendimento);
	
	// output
	printf("O valor do rendimento é de R$%.2f.\n", valorRendimento);
	printf("O valor final é de R$%.2f.\n", valorFinal);
}

