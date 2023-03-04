#include <stdio.h>

int main(){

	int numero;

	printf("Digite um numero entre 1 e 10: ");
	fflush(stdout);
	scanf("%d",&numero);

	while (numero < 1 || numero > 10){
		printf("ENTRE 1 E 10 FI DE JUMENTO\n");
		printf("Digite um numero entre 1 e 10: ");
		fflush(stdout);
		scanf("%d",&numero);
	}
	printf("A tabuada do %d e: \n",numero);
	for (int i = 1 ; i<=10 ; i++){
		printf("%d X %d = %d\n",numero,i,numero*i);
	}

	return 0;
}
