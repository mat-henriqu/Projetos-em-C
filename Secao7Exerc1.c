#include <stdio.h>

int main (){

	int num, maior=0;

	printf("Informe um numero: ");
	fflush(stdout);
	scanf("%d",&num);

	while (num!=0){
		if (num>maior){
			maior=num;
		}
		printf("Informe um numero: ");
		fflush(stdout);
		scanf("%d",&num);
	}

	printf("O maior numero que voce informou foi: %d",maior);

	return 0;
}
