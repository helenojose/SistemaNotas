#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float notas[4];
	float media[3];
	

	
	printf("Digite sua primeira nota:\n");
	scanf("%f",&notas[1]);
	
	if(notas[1] >= 10){
		
		printf("Valor invalido.\n\n");
	}
	
	else if(notas[1]< 0){
		
		printf("Valor invalido.\n\n");
	}
		
	else if(notas[2]< 0){
		
		printf("Valor invalido.\n\n");
	}
	
	printf("Digite sua segunda nota:\n");
	scanf("%f",&notas[2]);
	
	
	if(notas[2]< 0){
		
		printf("Valor invalido.\n\n");
	}
	
	else if(notas[2]> 10){
		printf("Digite o valor certo.");
	}
	
	else{
		printf("Digite o valor certo.");
	}
	
	media[1] = (notas[1]+notas[2])/2;
	
	printf("Aqui esta a sua primeria media:%.2f\n\n",media[1]);
	
	printf("Digite a sua terceira nota:\n");
	scanf("%f",&notas[3]);
	
	printf("Digite a sua quarta nota:\n");
	scanf("%f",&notas[4]);
	
	media[2] = (notas[3]+notas[4])/2;
	
	printf("Aqui esta a sua segunda media:%.2f\n\n",media[2]);
	
	media[3] = (media[1]+media[2])/2;
	
	if (media[3] > 7 ){
		
		printf( "VOCE FOI APROVADO:%.2f\n\n",media[3]);
	}
	
	else if(media[3] > 4){
		
		printf(" VOCE FOI PARA A RECUPERACAO:%.2f\n\n",media[3]);
	}
	
	else if (media[3] == 0 ){
	
		printf("VC FOI REPROVADO:%.2f\n\n", media[3]);
	
	}
	
	
	else{
		
		printf("VC NAO RESPONDEU UMA NOTA VIAVEL.");
	}
	
	
	printf("Exibindo os Valores do Vetor (notas) \n\n");
 	printf("notas[1] = %.2f\n", notas[1]);
  	printf("notas[2] = %.2f\n", notas[2]);
  	printf("notas[3] = %.2f\n", notas[3]);
  	printf("notas[4] = %.2f\n", notas[4]);
  	
	printf("Exibindo os valores do vetor (media) \n\n");
	printf("media[1] = %.2f\n", media[1]);
	printf("media[2] = %.2f\n", media[2]);
	printf("media[3] = %.2f\n", media[3]);
	
	
	system ("pause");
	return 0;	
}
