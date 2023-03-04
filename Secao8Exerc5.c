#include <stdio.h>

int main (){

	int vetor[10],maior=0;

	for (int i = 0; i <10;i++){
		printf("Digite um numero para o vetor na posicao %d|10: ",i+1);
		fflush(stdout);
		scanf("%d",&vetor[i]);
	}

	for (int i = 0; i <10;i++){
		if(vetor[i]>50){
			printf("Este numero %d na posicao %d e maior que 50",vetor[i],i+1);
			printf("\n");
			maior=1;
		}
	}

	if (maior<1){
		printf("Nao existe numero maior que 50");
	}

	return 0;
}
