#include <stdio.h>

int main(){

	int num,p,i;
	p=0;
	i=0;

	printf("Digite um valor: ");
	fflush(stdout);
	scanf("%d",&num);

	if (num % 2 == 0 ){

		p = num;
		printf("O valor e par!");

	} else {
		i=num;
		printf("O valor é impar!");
	}

	return 0;
}
