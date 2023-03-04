#include <stdio.h>
#include <ctype.h>

int main(){

	float altura,peso_ideal;
	char sexo;

	printf("Digite sua altura: ");
	fflush(stdout);
	scanf("%f",&altura);
	gets(stdin);
	printf("Digite seu sexo: m/f ");
	fflush(stdout);
	scanf("%c",&sexo);

	if (tolower(sexo)=='m'){
		peso_ideal=(72.7*altura)-58;
		printf("Seu peso ideal e: %.3f", peso_ideal);
	} else if (tolower(sexo)=='f'){
		peso_ideal=(62.1*altura)-44.7;
		printf("Seu peso ideal e: %.3f", peso_ideal);
	} else {
		printf("Sexo nao reconhecido, digitar m ou f minusculo");
	}

	return 0;
}
