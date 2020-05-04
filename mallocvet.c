#include <stdio.h>
#include <stdlib.h>

int main(){

	int *ptr = NULL;
	int n, i;

	printf(">> Alocação Dinâmica <<\n");
	printf(" - Entre com o tamanho do vetor: ");
	scanf("%d", &n);


	ptr = (int *) malloc(n*sizeof(int));
	
	if(ptr != NULL){
		for(i=0;i<n;i++){
		ptr[i]=i+1;
		printf("Valor: %d\n", ptr[i]);
		}
		free(ptr);
	}


return 0;
}
