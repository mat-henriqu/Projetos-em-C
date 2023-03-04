#include <stdio.h>

int main (){

	int valor, maior=0,menor=999,soma=0;
	float media;

	for (int i =0 ; i<10 ;i++){
		printf("informe um valor inteiro e positivo: \n");
		fflush(stdout);
		scanf("%d",&valor);
		if (valor>0){
			if (valor>maior){
				maior=valor;
			}
			if (valor<menor){
				menor=valor;
			}
			soma=soma+valor;
		}	else{
			i--;
			printf("O ANTA DIGITA UM VALOR INTEIRO E POSITIVO\n");
		}
	}
	media=soma/10;

	printf("O maior valor digitado foi: %d\n",maior);
	printf("O menor valor digitado foi: %d\n",menor);
	printf("A media dos valores digitados foi: %.3f\n",media);

	return 0;
}
