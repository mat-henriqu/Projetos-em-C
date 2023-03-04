#include <stdio.h>

int main(){

	float vetor[5];
	int codigo;

	printf("Digite o codigo (0 | 1 | 2): ");
	fflush(stdout);
	scanf("%d",&codigo);
	if(codigo!=0){
		for(int i=0;i<5;i++){
			printf("Informe um numero real: ");
			fflush(stdout);
			scanf("%f",&vetor[i]);
		}
		if (codigo==1){
			for (int i =0;i<5;i++){
				printf("%.2f\n",vetor[i]);
			}
		}
		if(codigo==2){
			for (int i=4;i>=0;i--){
				printf("%.2f\n",vetor[i]);
			}
		}
	}

	return 0;
}
