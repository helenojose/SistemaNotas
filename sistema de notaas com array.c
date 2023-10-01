#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	float notas[4];
	float media[3];
	
	
		printf("Digite sua primeira nota:\n");
		scanf("%f",&notas[1]);
		
		do{
			if (notas[1] <= 10 && notas[1] >=0){	
				continue;
			}else{
				printf("Nota invalida!\n");
				printf("Digite sua primeira nota:\n");
				scanf("%f",&notas[1]);
			}
		}while (notas[1] > 10 || notas[1] < 0);
				
		printf("Digite sua segunda nota:\n");
		scanf("%f",&notas[2]);
			
		do{	
			if (notas[2] <= 10 && notas[2] >=0){
				continue;
			}else{
				printf("Nota invalida!\n");
				printf("Digite sua segunda nota:\n");
				scanf("%f",&notas[2]);
			}
		}while (notas[2] > 10 || notas[2] < 0);
		
		media[1] = (notas[1]+notas[2])/2;
	
		printf("Aqui esta a sua primeria media:%.2f\n\n",media[1]);
	
		printf("Digite sua terceira nota:\n");
		scanf("%f",&notas[3]);

		do{
			if (notas[3] <= 10 && notas[3] >= 0){
				continue;
			}else{
				printf("Nota invalida!\n");
				printf("Digite sua terceira nota:\n");
				scanf("%f",&notas[3]);
			}
		}while(notas[3] > 10 || notas[3] < 0);
		
		printf("Digite sua quarta nota:\n");
		scanf("%f",&notas[4]);
		
		do{
			if(notas[4] <= 10 && notas[4] >= 0){
				continue;
			}else{
				printf("Nota invalida!\n");
				printf("Digite sua quarta nota:\n");
				scanf("%f",&notas[4]);
			}	
		}while(notas[4] > 10 || notas[4] < 0);
	
		media[2] = (notas[3]+notas[4])/2;
	
		printf("Aqui esta a sua segunda media:%.2f\n\n",media[2]);
	
		media[3] = (media[1]+media[2])/2;
		
		if (media[3] >= 7 ){
		
			printf( "VOCE FOI APROVADO:%.2f\n\n",media[3]);
		}else if(media[3] >= 4){
			printf(" VOCE FOI PARA A RECUPERACAO:%.2f\n\n",media[3]);
		}else{
			printf("VC FOI REPROVADO:%.2f\n\n", media[3]);
		}
	
		printf("Exibindo os Valores do Vetor (notas) \n\n");
 		printf("notas[1] = %.2f\n", notas[1]);
  		printf("notas[2] = %.2f\n", notas[2]);
  		printf("notas[3] = %.2f\n", notas[3]);
  		printf("notas[4] = %.2f\n\n", notas[4]);
  	
		printf("Exibindo os valores do vetor (media) \n\n");
		printf("media[1] = %.2f\n", media[1]);
		printf("media[2] = %.2f\n", media[2]);
		printf("media[3] = %.2f\n", media[3]);
	
	
		system ("pause");
		return 0;
}
