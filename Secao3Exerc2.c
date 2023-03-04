#include <stdio.h>

int main (){

	int quantidade_minima, quantidade_maxima;
	float estoque_medio;


	printf("Digite a quantidade minima: ");
	fflush(stdout);
	scanf("%d", &quantidade_minima);
	printf("Digite a quantidade maxima: ");
	fflush(stdout);
	scanf("%d", &quantidade_maxima);

	estoque_medio = (quantidade_minima + quantidade_maxima)/2;

	printf("O resultado do estoque medio e: %.2f", estoque_medio);

	return 0;
}
