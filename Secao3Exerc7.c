#include <stdio.h>

int main(){

	float altura;
	float peso_ideal;

	printf("Digite a sua altura: ");
	fflush(stdout);
	scanf("%f",&altura);

	peso_ideal=(72.7*altura)-58;

	printf("Seu peso ideal é: %.3f",peso_ideal);


	return 0;

}
