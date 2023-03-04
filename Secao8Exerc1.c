#include <stdio.h>

int main (){

	int vetor[5],pares[5],cont_p=0;

	for (int i=0;i<5;i++){
		printf("Informe um numero inteiro e positivo: ");
		fflush(stdout);
		scanf("%d",&vetor[i]);
		if (vetor[i] %2==0 && vetor[i]>0){
			pares[cont_p]=vetor[i];
			cont_p++;

			//if(vetor[i]>0){
				//pares[cont_p]=vetor[i];
				//cont_p++;
			//}
		}
	}

	for (int i=0; i<cont_p;i++){
		printf("%d\n",pares[i]);
	}

	return 0;
}
