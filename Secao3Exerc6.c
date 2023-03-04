#include <stdio.h>

int  main(){

	int horaTrabalhada;
	float salarioHora ,total;

	printf("Digite a quantidade de horas trabalhadas: ");
	fflush(stdout);
	scanf("%d",&horaTrabalhada);

	printf("Digite quanto ganha por hora: ");
	fflush(stdout);
	scanf("%f",&salarioHora);

	total = horaTrabalhada*salarioHora;

	printf("O valor total recebido no mes e: %.2f",total);

	return 0;
}
