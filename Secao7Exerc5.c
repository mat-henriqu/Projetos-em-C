#include <stdio.h>
#include <string.h>

int main(){

	char nome[100],senha[100];

	printf("Informe o nome: ");
	fflush(stdout);
	gets(nome);
	printf("Informe a senha: ");
	fflush(stdout);
	gets(senha);

	while (!strcmp(nome,senha)){
		printf("Informe nome e senha diferentes\n");
		printf("Informe o nome: ");
		fflush(stdout);
		gets(nome);
		printf("Informe a senha: ");
		fflush(stdout);
		gets(senha);
	}

	printf("\nSua senha e nome foram  salvos com Sucesso!!");

	return 0;
}
