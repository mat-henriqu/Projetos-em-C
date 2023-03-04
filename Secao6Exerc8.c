#include <stdio.h>
#include <ctype.h>

int main(){

	int numero;

	printf("Digite um numero: ");
	fflush(stdout);
	scanf("%d",&numero);

	if (numero % 2 == 0) {

		if (numero==0){
			printf("Numero neutro");
		} else if (numero>0){
			printf("Numero par positivo");
		} 	else {
			printf("Numero par negativo");
			}


	} else if (numero>0){
		printf("Numero impar positivo");
	} 	else {
		printf("Numero impar negativo");
		}

	return 0;
}
