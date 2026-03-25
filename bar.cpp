#include <stdio.h>

int main() {
	int valorCerveja = 7;
	int valorEspeto = 5;
	int quantCervejas, quantEspetos, valorFinal;
	
	printf("Quantas cervejas o cliente tomou? ");
	scanf("%i", &quantCervejas);
	printf("Quantos espetinhos o cliente comeu? ");
	scanf("%i", &quantEspetos);
	
	valorFinal = valorCerveja*quantCervejas + valorEspeto*quantEspetos;
	
	printf("O valor a ser pago pelo cliente é de R$%.2f.\n", valorFinal);

	return 0;
}
