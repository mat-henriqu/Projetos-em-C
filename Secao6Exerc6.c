#include <stdio.h>
#include <ctype.h>

int main(){

	int codigo,numero,excesso,extra,salario,salarioTotal;

	excesso=0;

	printf("Digite o cogido do funcionario: ");
	fflush(stdout);
	scanf("%d",&codigo);

	printf("Digite o numero de horas trabalhadas do funcionario: ");
	fflush(stdout);
	scanf("%d",&numero);

	if (numero>50){
		excesso=numero-50;
		numero=numero-excesso;
	}

	salario=numero*10;
	extra=excesso*20;
	salarioTotal=salario+extra;
	printf("O salario total e igual a: %d ; E o extra e igual  a: %d",salarioTotal,extra);

	return 0;
}
