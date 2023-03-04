#include <stdio.h>
#include <ctype.h>

int main(){

	int multa,peso,excedente;

	excedente=0;
	multa=0;

	printf("Digite o peso dos peixes: ");
	fflush(stdout);
	scanf("%d",&peso);

	if (peso>50){
		excedente=peso-50;
		multa=excedente*4;
	}

	printf("Peso: %d\n",peso);
	printf("Excesso: %d\n",excedente);
	printf("Multa: %d\n",multa);

	return 0;
}
