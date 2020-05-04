#include <stdio.h>
#include <math.h>	

#define TAM 10
	int main()
{

	int vet[TAM], i;
	float media, dp;
	
	printf("Este algoritmo mostra o desvio padrão dos 10 valores indicados pelo usuário.\n");

	for(i = 0; i < TAM; i++){
	printf("Entre com o %dº algarismo: ", i+1);
	scanf("%d", &vet[i]);
	
	media += vet[i];
	}
	media /= TAM;
	printf("O valor da média foi: %f\n", media);



	for(i = 0; i < TAM; i++){
	dp += pow(vet[i] - media, 2);
	}

	dp /= TAM-1;
	dp = sqrt(dp);

	printf("A média é: %f\n", media);
	printf("O desvio padrão é: %f\n", dp);
return 0;
}

	
	
	

