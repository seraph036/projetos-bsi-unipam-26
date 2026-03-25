#include <stdio.h>

int main() {
	// vars
	float precoFronha, precoLencol, precoCobertor, valorFinal;
	precoFronha = 20;
	precoLencol = 40;
	precoCobertor = 100;
	int quantFronha, quantLencol, quantCobertor;
	
	// input
	printf("Qual a quantidade comprada de fronhas?");
	scanf("%i", &quantFronha);
	printf("Qual a quantidade comprada de lençóis?");
	scanf("%i", &quantLencol);
	printf("Qual a quantidade comprada de cobertores?");
	scanf("%i", &quantCobertor);
	
	// algos
	valorFinal = precoFronha*quantFronha + precoLencol*quantLencol + precoCobertor*quantCobertor;
	
	// output
	printf("O valor total é de R$%.2f.\n", valorFinal);
}

