#include <stdio.h>
// STD = STANDARD = PADRAO
// IO = INPUT|OUTPUT = ENTRADA|SAIDA

int main() {
	// Declara��o de variaveis
	int num1, num2, soma, multiplicacao;

	// Entradas
	printf("Informe o primeiro numero: ");
	fflush(stdout);
	scanf("%d", &num1);
	printf("Informe o segundo numero: ");
	fflush(stdout);
	scanf("%d", &num2);

	//Processamento
	soma = num1+num2;
	multiplicacao = soma * num1;

	//Saida
	printf("O resultado da multiplicacao �: %d", multiplicacao);


	return 0;
}
