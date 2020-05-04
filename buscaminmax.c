#include <stdio.h>

void buscaminmax (int vet[], int tam, int *min, int *max) // Assinatura
{
	
	int i;		
	
	*min = vet[0];
	*max = vet[0];
	for(i=1;i<tam;i++){
		if(vet[i] < *min)
			*min = vet[i];
		if(vet[i] > *max)
			*max = vet[i];
	}
}
int main(){

	int vet[]= {1, 8, 66, 11, 43, 2};
	int a,b;

	buscaminmax(vet, 6, &a, &b);
	
	printf("Mín = %d  -  Máx = %d\n", a, b);

return 0;
}
