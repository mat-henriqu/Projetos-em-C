#include <stdio.h>
#include <ctype.h>

int main(){

	int num1,num2,num3,num4;
	int q1,q2,q3,q4;

	printf("Digite o numero 1: ");
	fflush(stdout);
	scanf("%d",&num1);

	printf("Digite o numero 2: ");
	fflush(stdout);
	scanf("%d",&num2);

	printf("Digite o numero 3: ");
	fflush(stdout);
	scanf("%d",&num3);

	printf("Digite o numero 4: ");
	fflush(stdout);
	scanf("%d",&num4);

	q1=num1*num1;
	q2=num2*num2;
	q3=num3*num3;
	q4=num4*num4;

	if (q3>=1000){

		printf("Quadrado do terceiro numero: %d",q3);

	} else {

	printf("Numero 1 %d e seu quadro %d\n", num1,q1);
	printf("Numero 2 %d e seu quadro %d\n", num2,q2);
	printf("Numero 3 %d e seu quadro %d\n", num3,q3);
	printf("Numero 4 %d e seu quadro %d", num4,q4);

	}
	return 0;
}
