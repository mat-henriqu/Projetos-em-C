#include <stdio.h>

int main(){

	int num1, num2;

	printf("Digite o primeiro numero: ");
	fflush(stdout);
	scanf("%d", &num1);

	printf("Digite o segundo  numero: ");
	fflush(stdout);
	scanf("%d",&num2);

	printf("O resultado da soma e: %d", num1+num2);



	return 0;

}
