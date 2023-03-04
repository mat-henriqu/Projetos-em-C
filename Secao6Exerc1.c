#include <stdio.h>

int main(){

	int n;

	printf("Digite um numero: ");
	fflush(stdout);
	scanf("%d",&n);


	if(n>100){

		printf("%d",n);

	} else {
		n=0;
		printf("%d",n);
	}

	return 0;
}
