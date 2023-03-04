#include <stdio.h>

int main(){

	int a,b,c,valor;

	printf("Digite um numero: ");
	fflush(stdout);
	scanf("%d",&valor);

	if(valor>0){

		a=valor;
		printf("Valor positivo  ");
		printf("%d",a);
	} else if (valor==0) {
		c=valor;
		printf("Valor neutro  ");
		printf("%d",c);
	} else {
		b=valor;
		printf("Valor negativo  ");
		printf("%d",b);
	}



	return 0;
}
