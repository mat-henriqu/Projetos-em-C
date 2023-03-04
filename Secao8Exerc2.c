#include <stdio.h>

int main(){

	int vetor1[10],vetor2[10],soma[10];

	for(int i=0;i<10;i++){
		printf("Informe um numero inteiro e positivo: ");
		fflush(stdout);
		scanf("%d",&vetor1[i]);
		printf("Informe outro inteiro e positivo: ");
		fflush(stdout);
		scanf("%d",&vetor2[i]);
		soma[i]=vetor1[i]+vetor2[i];
	}
	printf("As somas são respectivamente: ");
	for (int i=0;i<10;i++){
		printf("\n%d\n",soma[i]);
	}
	return 0;
}
