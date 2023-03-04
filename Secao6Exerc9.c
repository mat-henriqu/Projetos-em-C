#include <stdio.h>
#include <ctype.h>

int main(){

	float poluicao;

	printf("Digite o indice de poluicao: ");
	fflush(stdout);
	scanf("%f",&poluicao);

	if (poluicao >= 0.3 && poluicao <0.4){
		printf("Grupo 1 deve suspender atividades");
	} else if (poluicao >= 0.4 && poluicao <0.5){
		printf("Grupos 1 e 2 devem suspender atividades");
	} else if (poluicao >= 0.5){
		printf("Todos os grupos devem suspender atividades");
	} else {
		printf ("Niveis aceitaveis!!");
	}

	return 0;
}
