#include <stdio.h>

int main(){

	int vetor[20],soma=0;

	for (int i=0;i<20;i++){
		printf("Digite um numero: ");
		fflush(stdout);
		scanf("%d",&vetor[i]);
		soma=soma+vetor[i];
	}
	printf("A soma de todos esses numeros e: %d",soma);
	return 0;
}
