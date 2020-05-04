#include <stdio.h>

int main()
{

	int vet[10], i;
	float media;

	printf("Este programa lê 10 algarismos e mostra os valores acima da média destes 10 algarismos.\n");
	

	
	// Laço para leitura dos dados

	for(i=0; i<10; i++){
	printf("Entre com o %dº algarismo: ", i+1);
	scanf("%d", &vet[i]); 
	
	media = (media + vet[i]);
	media = media/10;
	}
	
	printf("A média é: %f\n", media);
	for(i = 0; i < 10; i++){
	if(vet[i] > media) 
	printf("O número %d está acima da média.\n", vet[i]);
	}

return 0;
}
	
	

