#include <stdio.h>

int main(){

	int contador_total =0, contador_sit1 = 0, contador_sit2 = 0;
	int contador_sit3 = 0,	contador_sit4 = 0, identificacao , defeito;
	float p1,p2,p3,p4;
	printf("Informe a identicacao: ");
	fflush(stdout);
	scanf("%d",&identificacao);

	while (identificacao != 0){
		printf("1 - Necessita de esfera. \n");
		printf("2 - Necessita de limpeza. \n");
		printf("3 - Necessita de troca do cabo ou conector. \n");
		printf("4 - Quebrado ou inutilizado. \n");
		printf("Informe o tipo de defeito: (1,2,3 ou 4.)");
		fflush(stdout);
		scanf("%d",&defeito);
		if(defeito==1){
			contador_sit1++;
		}
		if(defeito==2){
			contador_sit2++;
		}
		if(defeito==3){
			contador_sit3++;
		}
		if(defeito==4){
			contador_sit4++;
		}
		contador_total++;
		printf("Informe a identicacao: ");
		fflush(stdout);
		scanf("%d",&identificacao);
	}

	p1 = ((float)contador_sit1 / (float)contador_total *100.0);
	p2 = ((float)contador_sit2 / (float)contador_total *100.0);
	p3 = ((float)contador_sit3 / (float)contador_total *100.0);
	p4 = ((float)contador_sit4 / (float)contador_total *100.0);


	printf("Quantidade de Mouses %d \n\n",contador_total);
	printf("Situacao \t\t\t\t\t Quantidade \t\t\t Percentual\n");
	printf("1 - Necessita de esfera. \t\t\t   %d \t\t\t\t   %.2f%%\n",contador_sit1,p1);
	printf("2 - Necessita de limpeza. \t\t\t   %d \t\t\t\t   %.2f%%\n",contador_sit2,p2);
	printf("3 - Necessita de troca do cabo ou conector. \t   %d \t\t\t\t   %.2f%%\n",contador_sit3,p3);
	printf("4 - Quebrado ou inutilizado. \t\t\t   %d \t\t\t\t   %.2f%%\n",contador_sit4,p4);

	return 0;
}
