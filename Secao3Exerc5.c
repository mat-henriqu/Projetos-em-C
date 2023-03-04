#include <stdio.h>

int main(){

	int metro;

	printf("Digite um valor em metros ");
	fflush(stdout);
	scanf("%d",&metro);

	printf("Este valor em centimetros e: %d",metro*100);

	return 0;
}
