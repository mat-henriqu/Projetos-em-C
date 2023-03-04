#include <stdio.h>

int main(){

	int vetor[10];

	for(int i=0;i<10;i++){
		printf("Digite um numero: ");
		fflush(stdout);
		scanf("%d",&vetor[i]);
	}
	printf("Esses numeros na ordem inversa e: \n");

	for(int i=9;i>=0;i--){
		printf("\n%d\n",vetor[i]);
	}
	return 0;
}
